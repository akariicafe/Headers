@class NSString, SearchUIActionView;

@interface SearchUICommandButtonViewController : SearchUIButtonItemViewController <CNActionViewDelegate>

@property (retain, nonatomic) SearchUIActionView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCompact:(BOOL)a0;
- (void)setButtonItem:(id)a0;
- (id)init;
- (void)didPressActionView:(id)a0 longPress:(BOOL)a1;
- (void)updateTitle;
- (void)disableAndHideButton:(BOOL)a0;

@end
