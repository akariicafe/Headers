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

+ (BOOL)supportsSecureCoding;
+ (id)browserItemFromSticker:(id)a0;
+ (id)browserItemPayloadForCollaborationWithURL:(id)a0 collaborationType:(long long)a1;
+ (id)browserItemPayloadFromIMPluginPayload:(id)a0;
+ (id)createBrowserItemPayloadWithURL:(id)a0 data:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)__ck_urlFromTextBodyForRichLink;
- (BOOL)isEqualToPluginPayload:(id)a0;
- (id)mediaObjectFromPayload;
- (BOOL)shouldSendAsMediaObject;
- (BOOL)shouldSendAsRichLink;
- (BOOL)shouldSendAsText;
- (id)transcoderUserInfo;

@end
