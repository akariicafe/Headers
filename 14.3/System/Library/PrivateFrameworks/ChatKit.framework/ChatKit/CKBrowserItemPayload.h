@class NSString, NSDictionary, NSURL, CKMediaObject, UIViewController;
@protocol CKPluginEntryViewController;

@interface CKBrowserItemPayload : IMPluginPayload

@property (retain, nonatomic) NSURL *videoComplementFileURL;
@property (retain, nonatomic) UIViewController<CKPluginEntryViewController> *photoShelfViewController;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSDictionary *attributionInfo;
@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (nonatomic) BOOL requiresValidation;
@property (nonatomic) BOOL useDirectSend;

+ (id)browserItemFromSticker:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)browserItemPayloadFromIMPluginPayload:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)transcoderUserInfo;
- (id)mediaObjectFromPayload;
- (BOOL)shouldSendAsMediaObject;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPluginPayload:(id)a0;
- (BOOL)shouldSendAsRichLink;
- (BOOL)shouldSendAsText;
- (id)__ck_urlFromTextBodyForRichLink;
- (void)encodeWithCoder:(id)a0;

@end
