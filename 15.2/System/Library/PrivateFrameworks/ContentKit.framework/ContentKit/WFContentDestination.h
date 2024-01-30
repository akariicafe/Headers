@class NSString;

@interface WFContentDestination : NSObject <NSSecureCoding, NSCopying, WFSerializableContent>

@property (class, readonly, nonatomic) WFContentDestination *airdropDestination;
@property (class, readonly, nonatomic) WFContentDestination *appleScriptDestination;
@property (class, readonly, nonatomic) WFContentDestination *clipboardDestination;
@property (class, readonly, nonatomic) WFContentDestination *genericDestination;
@property (class, readonly, nonatomic) WFContentDestination *javaScriptForAutomationDestination;
@property (class, readonly, nonatomic) WFContentDestination *microphoneDestination;
@property (class, readonly, nonatomic) WFContentDestination *networkDestination;
@property (class, readonly, nonatomic) WFContentDestination *notificationDestination;
@property (class, readonly, nonatomic) WFContentDestination *locationDestination;
@property (class, readonly, nonatomic) WFContentDestination *printDestination;
@property (class, readonly, nonatomic) WFContentDestination *screenshotDestination;
@property (class, readonly, nonatomic) WFContentDestination *speechRecognitionDestination;
@property (class, readonly, nonatomic) WFContentDestination *shortcutsAppDestination;
@property (class, readonly, nonatomic) WFContentDestination *shareExtensionDestination;
@property (class, readonly, nonatomic) WFContentDestination *shellDestination;
@property (class, readonly, nonatomic) WFContentDestination *wallpaperDestination;
@property (class, readonly, nonatomic) WFContentDestination *windowsDestination;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long promptingBehaviour;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)allContentDestinationClasses;
+ (void)getContentDestinationFromFile:(id)a0 completionHandler:(id /* block */)a1;
+ (id)appDescriptorForFileProviderHandlingURL:(id)a0 error:(id *)a1;
+ (id)contentDestinationForFile:(id)a0;
+ (id)destinationWithNotesAccountIdentifier:(id)a0;
+ (id)destinationWithCalendarSource:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)wfSerializedRepresentation;
- (id)localizedMDMDescription;
- (unsigned long long)managedLevel;
- (id)initWithIdentifier:(id)a0 promptingBehaviour:(unsigned long long)a1;

@end
