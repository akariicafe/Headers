@class NSString, NSAttributedString, UIView;

@interface CKTranscriptStampCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol>

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL wantsContactImageLayout;
@property (nonatomic) BOOL wantsOffsetForReplyLine;
@property (nonatomic) BOOL isRetractionStamp;
@property (retain, nonatomic) UIView *stampTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (id)createStampTextView;

- (void)setOrientation:(char)a0;
- (void)addFilter:(id)a0;
- (void)clearFilters;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_fadeInLabelAtStartTime:(double)a0 completion:(id /* block */)a1;
- (id)animationWithKeyPath:(id)a0 beginTime:(double)a1 duration:(double)a2 fromValue:(id)a3 toValue:(id)a4;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentAlignmentRect;
- (BOOL)hidesCheckmark;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)performInsertion:(id /* block */)a0;

@end
