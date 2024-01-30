@interface TUIAssistantButtonSizeProvider : NSObject

@property (nonatomic) double barButtonWidth;

- (struct CGSize { double x0; double x1; })preferredSizeForButtonBarItem:(id)a0;
- (struct CGSize { double x0; double x1; })_preferredTitleSizeForBarButtonItem:(id)a0;

@end
