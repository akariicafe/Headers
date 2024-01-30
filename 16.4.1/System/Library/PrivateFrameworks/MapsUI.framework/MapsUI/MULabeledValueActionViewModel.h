@class NSString, UIMenu;
@protocol MUDynamicButtonCellModelChangeDelegate;

@interface MULabeledValueActionViewModel : NSObject <MUDynamicButtonCellModel, MULabeledValueActionViewModelProviding>

@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *symbolName;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long actionStyle;
@property (weak, nonatomic) id<MUDynamicButtonCellModelChangeDelegate> changeDelegate;
@property (copy, nonatomic) UIMenu *menu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *valueString;
@property (retain, nonatomic) NSString *alternativeTitleString;
@property (retain, nonatomic) NSString *symbolName;
@property (nonatomic) long long actionVariant;
@property (nonatomic) BOOL emphasizeValueString;
@property (nonatomic) int analyticsTarget;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int analyticAction;

+ (id)messageItemWithMapItem:(id)a0;

- (void).cxx_destruct;
- (id)accessibilityIdentifierForAction;
- (void)loadSubtitleWithCompletion:(id /* block */)a0;

@end
