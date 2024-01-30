@class NSString, NSArray;
@protocol TSADownloadDelegate;

@interface TSABaseApplicationDelegate : TSKApplicationDelegate

@property (readonly, nonatomic) NSString *nativeDocumentType;
@property (readonly, nonatomic) NSString *nativeDocumentExtension;
@property (readonly, nonatomic) NSString *templateDocumentType;
@property (readonly, nonatomic) NSString *templateSFFDocumentType;
@property (readonly, nonatomic) NSString *templateDocumentExtension;
@property (readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property (readonly, nonatomic) NSString *nativeSFFDocumentType;
@property (readonly, nonatomic) NSArray *readableDocumentTypes;
@property (readonly, nonatomic) NSArray *importableDocumentTypes;
@property (readonly, nonatomic) NSArray *applicationTemplateVariants;
@property (retain, nonatomic) id<TSADownloadDelegate> downloadDelegate;

+ (id)sharedDelegate;
+ (void)resetSharedConfigurations;
+ (void)presentAlertController:(id)a0 animated:(BOOL)a1;

- (id)init;
- (void)dealloc;
- (void)registerDefaults;
- (BOOL)openURL:(id)a0 sourceDocumentRoot:(id)a1;
- (id)invalidURLSchemes;
- (id)validURLSchemes;
- (void)persistenceError:(id)a0;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { } *)a0;
- (Class)documentRootClass;
- (BOOL)isReadableDocumentType:(id)a0;
- (double)mimimumAspectRatioForPreviewImage;
- (double)maximumAspectRatioForPreviewImage;
- (BOOL)URLIsValidForImportedHyperlink:(id)a0;
- (id)existingNestedDocumentPathForPath:(id)a0;

@end
