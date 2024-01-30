@class NSString, NSDictionary, NSDate, PHAsset;

@interface PHANotificationOptions : NSObject

@property (readonly, nonatomic) unsigned char type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *bodyText;
@property (retain, nonatomic) NSDate *deliveryDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) NSString *collectionUUID;

+ (id)stringFromNotificationType:(unsigned char)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0;

@end
