@class NSString, NSArray, WBSParsecImageRepresentation, NSURL;

@interface WBSParsecActionButton : WBSParsecModel

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *labelAlignment;
@property (readonly, copy, nonatomic) NSString *itunesLabel;
@property (readonly, copy, nonatomic) NSString *offerType;
@property (readonly, copy, nonatomic) NSString *completion;
@property (readonly, copy, nonatomic) NSString *itunesCompletion;
@property (readonly, copy, nonatomic) NSString *mediaKind;
@property (readonly, copy, nonatomic) NSArray *itunesContentIdentifiers;
@property (readonly, nonatomic, getter=isForStreamingResult) BOOL forStreamingResult;
@property (readonly, nonatomic, getter=isForAppleMusicResult) BOOL forAppleMusicResult;
@property (readonly, nonatomic, getter=isOverlay) BOOL overlay;
@property (readonly, nonatomic) WBSParsecImageRepresentation *baseIcon;
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property (readonly, copy, nonatomic) NSString *punchoutAppName;
@property (readonly, copy, nonatomic) NSString *punchoutAppBundleIdentifier;
@property (readonly, nonatomic) NSURL *punchoutURL;

+ (id)schema;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 mediaKind:(id)a1;

@end
