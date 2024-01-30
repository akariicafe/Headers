@class NSDictionary, NSString, NSNumber;

@interface SSLookupItemOffer : NSObject

@property (readonly, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly, nonatomic) NSString *offerType;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic) NSString *subscriptionType;

- (id)actionTextForType:(id)a0;
- (id)initWithLookupDictionary:(id)a0;
- (void)dealloc;

@end
