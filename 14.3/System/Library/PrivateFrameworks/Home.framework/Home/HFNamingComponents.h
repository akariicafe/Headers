@class NSString;

@interface HFNamingComponents : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isAccessory;
@property (nonatomic) BOOL isDiscoveredAccessory;
@property (nonatomic) BOOL isService;
@property (nonatomic) BOOL isChildService;
@property (nonatomic) BOOL isServiceGroup;
@property (nonatomic) BOOL isMediaAccessoryOrStereoPair;
@property (nonatomic) BOOL isTelevision;
@property (nonatomic) BOOL allowsEmptyNameTextField;
@property (nonatomic) BOOL allowsNullResettableName;
@property (readonly, nonatomic) id homeKitObject;
@property (readonly, nonatomic) NSString *placeholderText;
@property (readonly, nonatomic) NSString *textFieldDisplayText;
@property (readonly, nonatomic) NSString *defaultName;

+ (id)namingComponentFromService:(id)a0;
+ (id)namingComponentFromAccessory:(id)a0;
+ (id)namingComponentFromMediaSystem:(id)a0;
+ (id)namingComponentFromHomeKitObject:(id)a0;
+ (id)namingComponentFromServiceGroup:(id)a0;
+ (id)namingComponentFromDiscoveredAccessory:(id)a0;

- (void).cxx_destruct;
- (id)configuredName;
- (id)description;
- (id)initWithHomeKitObject:(id)a0;
- (id)roomName;
- (id)commitableNameForString:(id)a0;
- (id)categoryName;
- (id)homeKitSafeStringForString:(id)a0;

@end
