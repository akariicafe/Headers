@class NSString;

@interface BCSWiFiConfigurationData : NSObject <BCSParsedDataPrivate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *ssid;
@property (readonly, nonatomic, getter=isWEP) BOOL WEP;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
