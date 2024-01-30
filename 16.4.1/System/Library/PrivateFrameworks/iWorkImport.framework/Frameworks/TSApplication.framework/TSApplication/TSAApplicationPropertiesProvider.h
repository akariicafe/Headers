@class NSString, NSArray;

@interface TSAApplicationPropertiesProvider : TSDApplicationPropertiesProvider

@property (readonly, nonatomic) NSString *templateDocumentType;
@property (readonly, nonatomic) NSString *templateSFFDocumentType;
@property (readonly, nonatomic) NSString *templateDocumentExtension;
@property (readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property (readonly, nonatomic) NSString *nativeSFFDocumentType;
@property (readonly, nonatomic) NSArray *nativeDocumentTypes;
@property (readonly, nonatomic) NSArray *readableDocumentTypes;
@property (readonly, nonatomic) NSArray *importableDocumentTypes;
@property (readonly, nonatomic) NSString *appTextDefaultsKey;
@property (readonly, nonatomic) BOOL supportsTabNavigationOfCanvasObjects;

- (BOOL)isReadableDocumentType:(id)a0;
- (unsigned long long)webVideoRequiredDocumentWriteVersion;
- (BOOL)supportsWebVideos;
- (id)appTextDefaults;
- (id)iWorkTextDefaultsPassphraseVerifier;
- (void)setAppTextDefaults:(id)a0 passphraseVerifier:(id)a1;

@end
