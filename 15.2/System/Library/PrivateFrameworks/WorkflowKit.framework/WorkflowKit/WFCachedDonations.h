@class NSArray, NSDate;

@interface WFCachedDonations : NSObject

@property (readonly, nonatomic) NSArray *donations;
@property (readonly, nonatomic) NSDate *fetchDate;
@property (readonly, nonatomic) unsigned long long ballpark;

- (void).cxx_destruct;
- (id)initWithDonations:(id)a0 ballpark:(unsigned long long)a1;
- (BOOL)isValidWithBallpark:(unsigned long long)a0;

@end
