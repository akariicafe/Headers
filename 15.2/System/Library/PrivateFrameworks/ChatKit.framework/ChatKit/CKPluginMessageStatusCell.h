@class NSString, UIImageView, IMBalloonPluginDataSource, UIView;

@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell

@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *balloonBundleID;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (retain, nonatomic) UIView *previousPluginSnapshot;

- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)_updateBalloonPluginIconImage;
- (void)prepareForReuse;
- (void)dealloc;

@end
