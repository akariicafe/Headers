@class NSSet;

@interface CPActivitySuggestions : NSObject {
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _activityTable;
}

@property (nonatomic, readonly) NSSet *activitySuggestions;

- (void).cxx_destruct;
- (id)init;
- (BOOL)addActivityWithActivity:(id)a0 error:(id *)a1;
- (BOOL)removeActivityWithActivity:(id)a0 error:(id *)a1;
- (void)removeActivitiesWithBundleID:(id)a0;

@end
