@class NSNumber, AMSDeviceOffer, NSString;

@interface SUScriptDeviceOffer : SUScriptObject

@property (retain, nonatomic) AMSDeviceOffer *offer;
@property (readonly, nonatomic) AMSDeviceOffer *nativeOffer;
@property (readonly, nonatomic) NSNumber *adamId;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic, getter=isDowngrading) id downgrading;
@property (readonly, nonatomic) unsigned long long offerType;
@property (readonly, nonatomic, getter=isSubscribed) id subscribed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)setSubscribed:(id)a0;
- (void)setOfferType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setAdamId:(id)a0;
- (void)setDescription:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (void)setDowngrading:(id)a0;
- (id)scriptAttributeKeys;
- (id)initWithDeviceOffer:(id)a0;

@end
