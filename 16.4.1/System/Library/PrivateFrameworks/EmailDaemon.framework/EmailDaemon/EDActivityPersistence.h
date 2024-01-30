@class NSMutableDictionary;
@protocol EDActivityHookResponder;

@interface EDActivityPersistence : NSObject {
    NSMutableDictionary *_currentActivities;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<EDActivityHookResponder> activityHookResponder;

- (id)currentActivities;
- (void).cxx_destruct;
- (void)activityWithID:(id)a0 finishedWithError:(id)a1;
- (void)activityWithID:(id)a0 setCompletedCount:(long long)a1 totalCount:(long long)a2;
- (void)activityWithID:(id)a0 setUserInfoObject:(id)a1 forKey:(id)a2;
- (id)startActivityOfType:(long long)a0 userInfo:(id)a1;
- (id)initWithHookResponder:(id)a0;

@end
