@class NSNumber, NSURL, NSString;

@interface IKAssetElement : IKViewElement

@property (readonly, retain, nonatomic) NSNumber *persistentID;
@property (readonly, retain, nonatomic) NSNumber *rentalAdamID;
@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long keyDelivery;
@property (readonly, nonatomic, getter=isInfiniteDuration) BOOL infiniteDuration;
@property (readonly, retain, nonatomic) NSString *actionParams;
@property (readonly, retain, nonatomic) NSString *adamID;
@property (readonly, retain, nonatomic) NSURL *extrasURL;
@property (readonly, retain, nonatomic) NSString *bookmarkID;
@property (readonly, retain, nonatomic) NSString *contentID;
@property (readonly, retain, nonatomic) NSString *externalID;
@property (readonly, retain, nonatomic) NSString *serviceID;

+ (BOOL)shouldParseChildDOMElements;

- (id)_numberForAttribute:(id)a0;
- (BOOL)infiniteDuration;

@end
