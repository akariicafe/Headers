@class NSString;

@interface OBTextAccessoryButton : UIButton

@property (nonatomic) NSString *textStyle;

+ (id)accessoryButtonWithTextStyle:(id)a0;

- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)a0;

@end
