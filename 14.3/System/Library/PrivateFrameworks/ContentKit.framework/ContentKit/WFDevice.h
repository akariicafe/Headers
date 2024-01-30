@class NSString, NSArray;

@interface WFDevice : NSObject

@property (class, readonly, nonatomic) WFDevice *currentDevice;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenBounds;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) double screenCornerRadius;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *localizedModel;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) NSString *localizedWiFiDisplayName;
@property (readonly, nonatomic) NSString *marketingName;
@property (readonly, nonatomic) long long chipID;

- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (BOOL)hasCapability:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
