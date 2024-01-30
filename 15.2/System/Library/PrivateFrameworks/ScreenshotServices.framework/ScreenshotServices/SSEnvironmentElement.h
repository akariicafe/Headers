@class NSString, SSHarvestedApplicationMetadata, SSHarvestedApplicationDocument;

@interface SSEnvironmentElement : NSObject <NSCopying, BSXPCCoding, SSLoggable> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    NSString *_bundleIdentifier;
    NSString *_elementIdentifier;
    NSString *_identifier;
    BOOL _hasKeyboardFocus;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *elementIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasKeyboardFocus;
@property (readonly, nonatomic) BOOL supportsMetadataCapture;
@property (retain, nonatomic) SSHarvestedApplicationMetadata *metadata;
@property (retain, nonatomic) SSHarvestedApplicationDocument *document;
@property (readonly, nonatomic) BOOL isAppLauncher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *loggableDescription;

+ (id)_metadataIdentifierBlocklist;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)deviceMetadata;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayLayoutElement:(id)a0;
- (id)localizationMetadata;

@end
