@class UIControl, NSString, _UISlotView, _UISSecureControlSizeSpec, _UISSecureControlCategory;
@protocol _UISecureControl;

@interface _UISecureController : NSObject <_UISlotViewContentDelegate> {
    UIControl<_UISecureControl> *_secureControl;
    _UISlotView *_slotView;
    _UISSecureControlSizeSpec *_lastSizeSpec;
}

@property (nonatomic) long long cornerStyle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGColor { } *baseForegroundColor;
@property (nonatomic) struct CGColor { } *baseBackgroundColor;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) BOOL shouldLayoutSynchronously;
@property (readonly, nonatomic) _UISSecureControlCategory *category;
@property (readonly, nonatomic) BOOL enchanted;
@property (readonly, nonatomic) struct CGSize { double width; double height; } intrinsicContentSize;
@property (readonly, nonatomic) unsigned int secureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updateState;
- (void).cxx_destruct;
- (id)currentTagForSlotView:(id)a0;
- (id)initWithCategory:(id)a0 control:(id)a1;
- (BOOL)shouldGetFinalContentSynchronouslyInSlotView:(id)a0;
- (id)slotMachineForFinalContentInSlotView:(id)a0;
- (void)slotView:(id)a0 didSetFinalContent:(BOOL)a1 forStyle:(id)a2 tag:(id)a3;
- (void)slotView:(id)a0 didSetInitialContent:(BOOL)a1 forStyle:(id)a2 tag:(id)a3;
- (id)slotView:(id)a0 initialContentForStyle:(id)a1 tag:(id)a2;
- (id)slotView:(id)a0 replacementForFinalContent:(id)a1 style:(id)a2 tag:(id)a3;
- (BOOL)slotView:(id)a0 shouldSetFinalContentForStyle:(id)a1 tag:(id)a2;
- (BOOL)slotView:(id)a0 shouldSetInitialContentForStyle:(id)a1 tag:(id)a2;
- (void)updateSlotView;

@end
