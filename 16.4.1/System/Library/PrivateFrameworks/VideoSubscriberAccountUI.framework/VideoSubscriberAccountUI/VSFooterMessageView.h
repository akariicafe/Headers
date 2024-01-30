@class NSString, VSFontCenter;

@interface VSFooterMessageView : UIView <PSHeaderFooterView>

@property (copy, nonatomic) NSString *primaryMessage;
@property (copy, nonatomic) NSString *secondaryMessage;
@property (copy, nonatomic) NSString *tertiaryMessage;
@property (retain, nonatomic) VSFontCenter *fontCenter;

- (id)initWithSpecifier:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;

@end
