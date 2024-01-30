@class PXSurveyQuestionsCongratulationsGadgetContentView, NSString, PXGadgetSpec;
@protocol PXGadgetDelegate;

@interface PXSurveyQuestionCongratulationsGadget : NSObject <PXGadget, PXSurveyQuestionCongratulationsGadgetContentViewDelegate>

@property (retain, nonatomic) PXSurveyQuestionsCongratulationsGadgetContentView *contentView;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)congratulationsGadgetContentViewDidSelectActionButton:(id)a0;
- (id)uniqueGadgetIdentifier;

@end
