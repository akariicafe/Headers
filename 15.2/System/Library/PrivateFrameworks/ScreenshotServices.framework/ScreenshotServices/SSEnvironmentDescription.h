@class SSEnvironmentDescriptionAppleInternalOptions, NSString, NSArray, SSUIServiceOptions, NSDate, BSSettings, SSImageSurface;

@interface SSEnvironmentDescription : NSObject <SSLoggable, BSXPCCoding>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *elements;
@property (retain, nonatomic) SSImageSurface *imageSurface;
@property (nonatomic) struct CGSize { double width; double height; } imagePixelSize;
@property (nonatomic) double imageScale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imagePointSize;
@property (nonatomic) unsigned long long presentationMode;
@property (retain, nonatomic) SSUIServiceOptions *serviceOptions;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long externalFlashLayerRenderID;
@property (nonatomic) unsigned int externalFlashLayerContextID;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BSSettings *bsSettings;
@property (retain, nonatomic) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions;
@property (copy, nonatomic) NSString *betaApplicationBundleID;
@property (copy, nonatomic) NSString *betaApplicationName;
@property (nonatomic) BOOL canAutosaveToFiles;
@property (nonatomic) BOOL skipShutterSound;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)takeElementsFromDisplayLayout:(id)a0;
- (void)setDebugElements:(id)a0;

@end
