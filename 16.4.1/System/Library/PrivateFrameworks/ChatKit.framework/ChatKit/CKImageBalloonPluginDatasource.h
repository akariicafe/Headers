@class CKMediaObject, CKBalloonView;

@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) CKMediaObject *mediaObject;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)imageBalloon;
- (id)initWithPluginPayload:(id)a0;
- (void)previewDidChange:(id)a0;

@end
