@class UILabel, CKStandardButton, UIMenu;

@interface CKDetailsLocationShareCell : CKTranscriptDetailsResizableCell

@property (retain, nonatomic) CKStandardButton *button;
@property (retain, nonatomic) UILabel *timeRemainingLabel;
@property (copy, nonatomic) UIMenu *menu;
@property (nonatomic) BOOL showOfferTimeRemaining;
@property (nonatomic) double offerTimeRemaining;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)timeStringForTimeInterval:(double)a0;

@end
