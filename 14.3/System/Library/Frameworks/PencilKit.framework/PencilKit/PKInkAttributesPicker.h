@class PKInk, NSString, _PKInkAttributesPickerView;
@protocol PKInkAttributesPickerDelegate;

@interface PKInkAttributesPicker : PKPaletteAttributeViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate>

@property (class, readonly, nonatomic) double defaultMinimumOpacityValue;

@property (retain, nonatomic) _PKInkAttributesPickerView *pickerView;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) double minimumOpacityValue;
@property (readonly, nonatomic, getter=isUpdatingOpacityValue) BOOL updatingOpacityValue;
@property (retain, nonatomic) PKInk *selectedInk;
@property (retain, nonatomic) id<PKInkAttributesPickerDelegate> delegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateUI;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithInk:(id)a0;
- (void)setSelectedInk:(id)a0 animated:(BOOL)a1;
- (void)_notifyInkAttributesPickerDidChangeInk;
- (void)inkAttributesPickerViewDidChangeInkOpacity:(id)a0;
- (void)inkAttributesPickerViewDidChangeInkThickness:(id)a0;
- (void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)a0;
- (void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)a0;

@end
