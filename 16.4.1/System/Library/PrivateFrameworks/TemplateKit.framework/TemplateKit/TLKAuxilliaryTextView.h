@class TLKStackView, NSString, TLKLabel, TLKFormattedText;

@interface TLKAuxilliaryTextView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKLabel *topLabel;
@property (retain, nonatomic) TLKLabel *middleLabel;
@property (retain, nonatomic) TLKLabel *bottomLabel;
@property (retain, nonatomic) TLKStackView *contentView;
@property (nonatomic) BOOL useCompactMode;
@property (retain, nonatomic) TLKFormattedText *topText;
@property (retain, nonatomic) TLKFormattedText *middleText;
@property (retain, nonatomic) TLKFormattedText *bottomText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)bottomLabelFont;
- (id)middleLabelFont;
- (id)bottomLabelString;
- (id)middleLabelString;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)topLabelString;

@end
