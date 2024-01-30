@class NSString, NSNumber;

@interface WLKStoreOfferPeriod : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSNumber *duration;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)_offerPeriodForString:(id)a0;

@end
