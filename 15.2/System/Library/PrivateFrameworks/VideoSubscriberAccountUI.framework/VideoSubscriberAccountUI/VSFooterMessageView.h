@class NSString, VSFontCenter;

@interface VSFooterMessageView : UIView <PSHeaderFooterView>

@property (copy, nonatomic) NSString *primaryMessage;
@property (copy, nonatomic) NSString *secondaryMessage;
@property (copy, nonatomic) NSString *tertiaryMessage;
@property (retain, nonatomic) VSFontCenter *fontCenter;

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;

@end
