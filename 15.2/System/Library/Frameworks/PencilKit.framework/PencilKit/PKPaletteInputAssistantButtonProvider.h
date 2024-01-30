@class UITextInputAssistantItem;

@interface PKPaletteInputAssistantButtonProvider : NSObject

@property (retain, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (copy, nonatomic) id /* block */ inclusionFilter;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInputAssistantItem:(id)a0;
- (id)buttonsForCurrentConfiguration;
- (id)_nonSystemBarButtonItemGroups;
- (BOOL)_shouldIncludeBarButtonItem:(id)a0;

@end
