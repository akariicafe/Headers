@class NSString, UIImageView, IMBalloonPluginDataSource, UIView;

@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell

@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *balloonBundleID;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (retain, nonatomic) UIView *previousPluginSnapshot;

- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performInsertion:(id /* block */)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBalloonPluginIconImage;

@end
