@class KNAbstractSlide, NSString, KNTitlePlaceholderInfo, KNBodyPlaceholderInfo;
@protocol TSDCanvasProxyDelegate;

@interface KNImager : TSAImager <TSDConnectedInfoReplacing>

@property (nonatomic) unsigned long long slideNumber;
@property (weak, nonatomic) KNAbstractSlide *slide;
@property (retain, nonatomic) KNTitlePlaceholderInfo *replacementTitlePlaceholder;
@property (retain, nonatomic) KNBodyPlaceholderInfo *replacementBodyPlaceholder;
@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly, nonatomic) BOOL verticalTextAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)a0;
- (id)initWithDocumentRoot:(id)a0;
- (BOOL)isInfoAKeynoteTemplateObject:(id)a0;

@end
