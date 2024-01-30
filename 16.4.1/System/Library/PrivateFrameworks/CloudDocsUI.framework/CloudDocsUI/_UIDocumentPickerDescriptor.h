@class NSString, NSExtension, NSArray;

@interface _UIDocumentPickerDescriptor : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *supportedContentTypes;
@property (nonatomic) BOOL enabled;
@property (nonatomic, getter=isNewlyAdded) BOOL newlyAdded;
@property (readonly, copy, nonatomic) NSString *nonUIIdentifier;
@property (readonly, retain, nonatomic) NSString *fileProviderDocumentGroup;

+ (BOOL)isContentManaged;
+ (void)setIsContentManaged:(BOOL)a0;
+ (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
+ (struct { unsigned int x0[8]; })hostAuditToken;
+ (char)cloudEnabledStatus;
+ (void)__updateCloudEnabledStatus;
+ (void)_ubiquityIdentityTokenDidChange:(id)a0;
+ (void)_updateCloudEnabledStatus;
+ (id)allPickers;
+ (id)allPickersForMode:(unsigned long long)a0 documentTypes:(id)a1;
+ (char)cloudMigrationStatus;
+ (id)defaultPickerIdentifierForMode:(unsigned long long)a0 documentTypes:(id)a1;
+ (id)descriptorWithIdentifier:(id)a0;
+ (id)enabledPickersForMode:(unsigned long long)a0 documentTypes:(id)a1;
+ (id)filteredPickersForPickers:(id)a0 filter:(unsigned long long)a1;
+ (id)hostBundleID;
+ (BOOL)isInAddToiCloudDrive;
+ (id)manageablePickersForMode:(unsigned long long)a0 documentTypes:(id)a1;
+ (id)pickerOrder;
+ (void)setHostBundleID:(id)a0;
+ (void)setOrderFromPickers:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)imageWithScale:(double)a0;
- (id)_extensionValueOfClass:(Class)a0 forKey:(id)a1;
- (id)_ownBundle;
- (id)_parentApp;
- (id)nonUIBundle;
- (BOOL)pickerEnabledForMode:(unsigned long long)a0 documentTypes:(id)a1 reason:(id *)a2;
- (BOOL)supportsPickerMode:(unsigned long long)a0;

@end
