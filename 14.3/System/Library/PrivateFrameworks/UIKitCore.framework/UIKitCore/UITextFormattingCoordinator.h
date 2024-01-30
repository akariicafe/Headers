@class NSString;
@protocol UITextFormattingCoordinatorDelegate;

@interface UITextFormattingCoordinator : NSObject <UIFontPickerViewControllerDelegate>

@property (class, readonly, getter=isFontPanelVisible) BOOL fontPanelVisible;

@property (weak, nonatomic) id<UITextFormattingCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textFormattingCoordinatorForWindowScene:(id)a0;
+ (void)toggleFontPanel:(id)a0;

- (void)updateTextAttributesWithConversionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithWindowScene:(id)a0;
- (void)fontPickerViewControllerDidPickFont:(id)a0;
- (void)setSelectedAttributes:(id)a0 isMultiple:(BOOL)a1;

@end
