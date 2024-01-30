@class NSString, UIView;

@interface MRUActivityAccessoryView : UIView <SBUISystemApertureAccessoryView>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
