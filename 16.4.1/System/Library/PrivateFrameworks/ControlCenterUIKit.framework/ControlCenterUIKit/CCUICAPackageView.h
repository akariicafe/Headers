@class CAPackage, NSString, CAStateController, UIView, CALayer, CCUICAPackageDescription;

@interface CCUICAPackageView : UIView <CCUIPunchOutRendering, CCUIPunchOutCompensating, NSCopying> {
    CAStateController *_stateController;
    UIView *_packageContentView;
    CALayer *_packageLayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, setter=ccui_setCompensationAlpha:) double ccui_compensationAlpha;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CCUICAPackageDescription *packageDescription;
@property (nonatomic) double scale;

- (void)setStateName:(id)a0;
- (BOOL)ccui_configureForPunchOutRendering:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setPackage:(id)a0;
- (void)layoutSubviews;
- (void)ccui_updatePunchOutCompensationIfNecessary;
- (id)ccui_punchOutCompensatingCopy;
- (void).cxx_destruct;

@end
