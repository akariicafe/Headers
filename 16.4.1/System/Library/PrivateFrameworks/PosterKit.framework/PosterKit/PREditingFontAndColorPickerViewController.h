@class NSURL, UIBarButtonItem, PREditingColorWellView, PREditingFontPickerComponentViewController, PREditorColorPickerConfiguration, PREditingColorPickerComponentViewController, NSString, PREditorNumberingSystemViewController, UIStackView, PREditingColorWell, NSArray, PREditingColorVariationStore, PREditorNumberingSystemPickerController, PRPosterTitleStyleConfiguration;
@protocol PREditingFontAndColorPickerViewControllerDelegate;

@interface PREditingFontAndColorPickerViewController : UIViewController <PREditingFontPickerComponentViewControllerDelegate, PREditorNumberingSystemPickerControllerDelegate, PREditingColorPickerComponentViewControllerDelegate, PREditorNumberingSystemViewControllerDelegate, UISheetPresentationControllerDelegate>

@property (nonatomic) BOOL hasLoadedComponentViewControllers;
@property (retain, nonatomic) UIStackView *rootStackView;
@property (retain, nonatomic) UIBarButtonItem *numberSystemBarItem;
@property (retain, nonatomic) PREditorNumberingSystemPickerController *numberingSystemController;
@property (retain, nonatomic) PREditingFontPickerComponentViewController *fontPickerController;
@property (retain, nonatomic) PREditingColorPickerComponentViewController *colorPickerController;
@property (retain, nonatomic) PREditorNumberingSystemViewController *numberingSystemViewController;
@property (copy, nonatomic) NSArray *additionalFonts;
@property (retain, nonatomic) PREditingColorWellView *colorWellView;
@property (retain, nonatomic) PREditingColorWell *colorWell;
@property (readonly, nonatomic) unsigned long long components;
@property (retain, nonatomic) PREditingColorVariationStore *colorVariationStore;
@property (retain, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (retain, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (nonatomic) double contentsLuminance;
@property (copy, nonatomic) NSURL *extensionBundleURL;
@property (weak, nonatomic) id<PREditingFontAndColorPickerViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)loadView;
- (id)initWithComponents:(unsigned long long)a0;
- (void)_closeButtonTapped:(id)a0;
- (void)_signalDelegateDidFinish;
- (void)colorPickerComponentViewController:(id)a0 didSelectColorItem:(id)a1 userSelected:(BOOL)a2;
- (void)colorPickerComponentViewControllerDidChangeHeight:(id)a0;
- (void)colorWellDidUpdateColor:(id)a0;
- (double)desiredDetent;
- (void)fontPickerComponentViewController:(id)a0 didSelectFont:(id)a1;
- (void)loadComponentViewControllersIfNeeded;
- (id)localeWithNumberingSystem:(id)a0;
- (void)numberingSystemPickerController:(id)a0 didSelectNumberingSystem:(id)a1;
- (void)numberingSystemViewController:(id)a0 didSelectNumberingSystem:(id)a1;
- (void)numberingSystemWasChanged:(id)a0 locale:(id)a1;

@end
