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

+ (void)setIsContentManaged:(BOOL)a0;
+ (BOOL)isContentManaged;
+ (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
+ (struct { unsigned int x0[8]; })hostAuditToken;
+ (char)cloudEnabledStatus;
+ (char)cloudMigrationStatus;
+ (id)manageablePickersForMode:(unsigned long long)a0 documentTypes:(id)a1;
+ (id)allPickers;
+ (void)setOrderFromPickers:(id)a0;
+ (id)hostBundleID;
+ (BOOL)isInAddToiCloudDrive;
+ (id)pickerOrder;
+ (id)allPickersForMode:(unsigned long long)a0 documentTypes:(id)a1;
+ (id)filteredPickersForPickers:(id)a0 filter:(unsigned long long)a1;
+ (id)enabledPickersForMode:(unsigned long long)a0 documentTypes:(id)a1;
+ (void)__updateCloudEnabledStatus;
+ (void)_ubiquityIdentityTokenDidChange:(id)a0;
+ (void)_updateCloudEnabledStatus;
+ (void)setHostBundleID:(id)a0;
+ (id)defaultPickerIdentifierForMode:(unsigned long long)a0 documentTypes:(id)a1;
+ (id)descriptorWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)imageWithScale:(double)a0;
- (BOOL)pickerEnabledForMode:(unsigned long long)a0 documentTypes:(id)a1 reason:(id *)a2;
- (BOOL)supportsPickerMode:(unsigned long long)a0;
- (id)_extensionValueOfClass:(Class)a0 forKey:(id)a1;
- (id)_ownBundle;
- (id)_parentApp;
- (id)nonUIBundle;

@end
