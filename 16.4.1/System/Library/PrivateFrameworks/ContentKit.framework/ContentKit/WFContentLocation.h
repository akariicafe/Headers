@class NSString;

@interface WFContentLocation : NSObject <NSSecureCoding, NSCopying, WFSerializableContent>

@property (class, readonly, nonatomic) WFContentLocation *airdropLocation;
@property (class, readonly, nonatomic) WFContentLocation *appleScriptLocation;
@property (class, readonly, nonatomic) WFContentLocation *clipboardLocation;
@property (class, readonly, nonatomic) WFContentLocation *focusLocation;
@property (class, readonly, nonatomic) WFContentLocation *genericLocation;
@property (class, readonly, nonatomic) WFContentLocation *javaScriptForAutomationLocation;
@property (class, readonly, nonatomic) WFContentLocation *microphoneLocation;
@property (class, readonly, nonatomic) WFContentLocation *networkLocation;
@property (class, readonly, nonatomic) WFContentLocation *notificationLocation;
@property (class, readonly, nonatomic) WFContentLocation *onScreenContentLocation;
@property (class, readonly, nonatomic) WFContentLocation *locationLocation;
@property (class, readonly, nonatomic) WFContentLocation *printLocation;
@property (class, readonly, nonatomic) WFContentLocation *screenshotLocation;
@property (class, readonly, nonatomic) WFContentLocation *speechRecognitionLocation;
@property (class, readonly, nonatomic) WFContentLocation *shortcutsAppLocation;
@property (class, readonly, nonatomic) WFContentLocation *shareExtensionLocation;
@property (class, readonly, nonatomic) WFContentLocation *shellLocation;
@property (class, readonly, nonatomic) WFContentLocation *wallpaperLocation;
@property (class, readonly, nonatomic) WFContentLocation *webpagesLocation;
@property (class, readonly, nonatomic) WFContentLocation *windowsLocation;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long promptingBehaviour;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentLocationForFile:(id)a0;
+ (id)allContentLocationClasses;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)appDescriptorForFileProviderHandlingURL:(id)a0 error:(id *)a1;
+ (void)getContentLocationFromFile:(id)a0 completionHandler:(id /* block */)a1;
+ (id)locationWithCalendarSource:(id)a0;
+ (id)locationWithNotesAccountIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (id)localizedMDMDescription;
- (unsigned long long)managedLevel;
- (id)initWithIdentifier:(id)a0 promptingBehaviour:(unsigned long long)a1;

@end
