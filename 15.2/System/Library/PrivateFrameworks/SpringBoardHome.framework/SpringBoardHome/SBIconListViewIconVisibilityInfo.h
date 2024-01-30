@class NSString, NSMapTable;

@interface SBIconListViewIconVisibilityInfo : NSObject <BSDescriptionProviding, NSCopying> {
    NSMapTable *_visibleRects;
}

@property (nonatomic, getter=isNormalized) BOOL normalized;
@property (readonly, copy, nonatomic) NSMapTable *visibleIconRects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForIcon:(id)a0;
- (void)enumerateVisibleIconsUsingBlock:(id /* block */)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIcon:(id)a1;
- (void)addValuesFromIconVisibilityInfo:(id)a0;

@end
