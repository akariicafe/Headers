@class UILabel, NSAttributedString, NSString;

@interface CKTranscriptUnavailabilityIndicatorCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol, IMUnavailabilityIndicatorChatItemDelegate>

@property (retain, nonatomic) UILabel *unavailableTitleLabel;
@property (copy, nonatomic) NSAttributedString *unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton;
@property (copy, nonatomic) NSAttributedString *unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton;
@property (nonatomic) BOOL displayingNotifyAnywayButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (id)unavailableTitleLabel;

- (BOOL)hidesCheckmark;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (void)_updateUnavailableTitleLabelAttributedTextAnimated:(BOOL)a0;
- (void)displayNotifyAnywayButtonStateChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)_fadeInLabelAtStartTime:(double)a0 completion:(id /* block */)a1;
- (id)animationWithKeyPath:(id)a0 beginTime:(double)a1 duration:(double)a2 fromValue:(id)a3 toValue:(id)a4;
- (void)clearFilters;

@end
