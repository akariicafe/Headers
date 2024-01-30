@class UITextInputAssistantItem;

@interface PKPaletteInputAssistantButtonProvider : NSObject

@property (retain, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (copy, nonatomic) id /* block */ inclusionFilter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInputAssistantItem:(id)a0;
- (id)_nonSystemBarButtonItemGroups;
- (BOOL)_shouldIncludeBarButtonItem:(id)a0;
- (id)buttonsForCurrentConfiguration;

@end
