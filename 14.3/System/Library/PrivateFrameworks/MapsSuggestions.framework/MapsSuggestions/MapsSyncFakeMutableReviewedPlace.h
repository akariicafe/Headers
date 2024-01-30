@class NSUUID, NSString, NSDate;

@interface MapsSyncFakeMutableReviewedPlace : MapsSyncFakeMutableBaseItem <MapsSyncMutableReviewedPlace>

@property (nonatomic) unsigned long long muid;
@property (retain, nonatomic) NSDate *lastSuggestedReviewDate;
@property (nonatomic) BOOL hasUserReviewed;
@property (copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitEditsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 hasUserReviewed:(BOOL)a1 lastSuggestedReviewDate:(id)a2;

@end
