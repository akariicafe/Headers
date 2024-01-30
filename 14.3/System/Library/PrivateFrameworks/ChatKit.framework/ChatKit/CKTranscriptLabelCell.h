@class UILabel, NSAttributedString, NSString;

@interface CKTranscriptLabelCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol>

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL wantsContactImageLayout;
@property (nonatomic) BOOL wantsOffsetForReplyLine;
@property (retain, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)label;
+ (id)reuseIdentifier;

- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)clearFilters;
- (void).cxx_destruct;
- (void)addFilter:(id)a0;
- (BOOL)hidesCheckmark;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentAlignmentRect;
- (void)layoutSubviewsForContents;
- (void)performInsertion:(id /* block */)a0;
- (void)prepareForReuse;
- (void)_fadeInLabelAtStartTime:(double)a0 completion:(id /* block */)a1;
- (id)animationWithKeyPath:(id)a0 beginTime:(double)a1 duration:(double)a2 fromValue:(id)a3 toValue:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOrientation:(char)a0;

@end
