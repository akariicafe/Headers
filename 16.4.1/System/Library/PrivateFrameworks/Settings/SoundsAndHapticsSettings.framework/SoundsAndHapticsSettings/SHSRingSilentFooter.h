@class NSString;

@interface SHSRingSilentFooter : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newTextView;
+ (id)newImageView;

- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;

@end
