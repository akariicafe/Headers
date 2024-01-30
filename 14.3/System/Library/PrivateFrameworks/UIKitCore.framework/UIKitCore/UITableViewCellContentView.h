@class NSString;

@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending> {
    struct { unsigned char edgesForOverridingDefaultLayoutMargins : 4; } _contentViewFlags;
}

@property (nonatomic, getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } overriddenDefaultLayoutMargins;
@property (nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) BOOL _layoutEngineSuspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classFallbacksForKeyedArchiver;

- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_tableViewCellContentViewCommonSetup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_concreteDefaultLayoutMargins;

@end
