@class NSDate;

@interface RTReviewedPlace : NSObject

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSDate *lastSuggestedReviewDate;
@property (readonly, nonatomic) BOOL hasUserReviewed;
@property (readonly, nonatomic) NSDate *modifiedDate;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMuid:(unsigned long long)a0 lastSuggestedReviewDate:(id)a1 hasUserReviewed:(BOOL)a2 modifiedDate:(id)a3;

@end
