@class NSString;

@interface CCUISensorAttributionEntity : NSObject <NSCopying>

@property (copy, nonatomic) NSString *executableDisplayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL isSystemService;
@property (readonly, copy, nonatomic) NSString *displayNameForCompactView;

+ (id)attributionEntityFromSensorActivityData:(id)a0;
+ (id)genericLocationSystemServiceEntity;

- (BOOL)isSetupApp;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSiriAndDictationEntity;
- (BOOL)isWalletSpecialEntity;
- (id)debugDescription;
- (BOOL)isKeyboardCameraEntity;
- (BOOL)isContinuityCaptureExtension;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isGenericLocationSystemServiceEntity;

@end
