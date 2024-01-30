@class UILabel, NSString;

@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane

@property (readonly, nonatomic) UILabel *infoLabel;
@property (nonatomic) unsigned long long internalInfoLabelType;
@property (copy, nonatomic) NSString *string;
@property (nonatomic) double marginInset;
@property (nonatomic) unsigned long long infoLabelType;

- (id)initWithString:(id)a0;
- (id)titleFont;
- (void).cxx_destruct;
- (id)messageFont;
- (void)addToStackView:(id)a0 context:(id)a1;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (id)infoLabelWithString:(id)a0;
- (void)setLabel:(id)a0 toInfoLabelType:(unsigned long long)a1;

@end
