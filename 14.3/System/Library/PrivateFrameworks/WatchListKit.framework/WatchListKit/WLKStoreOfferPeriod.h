@class NSString, NSNumber;

@interface WLKStoreOfferPeriod : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSNumber *duration;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)_offerPeriodForString:(id)a0;

@end
