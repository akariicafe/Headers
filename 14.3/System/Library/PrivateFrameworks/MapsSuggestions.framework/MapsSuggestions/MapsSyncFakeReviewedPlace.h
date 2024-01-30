@class NSUUID, NSString, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MapsSyncFakeReviewedPlace : MapsSyncFakeBaseItem <MapsSyncReviewedPlace> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_editBlocks;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasUserReviewed;
@property (readonly, nonatomic) NSDate *lastSuggestedReviewDate;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitEditsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 createTime:(id)a1 hasUserReviewed:(BOOL)a2 lastSuggestedReviewDate:(id)a3;

@end
