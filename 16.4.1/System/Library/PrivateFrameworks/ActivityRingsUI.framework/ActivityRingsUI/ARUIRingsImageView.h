@class NSString, ARUIRenderer, ARUIRenderContext, ARUIRingGroup;

@interface ARUIRingsImageView : UIImageView <ARUIRingGroupDelegate> {
    ARUIRenderContext *_renderContext;
    BOOL _needsImageRender;
}

@property (readonly, nonatomic) ARUIRingGroup *ringGroup;
@property (readonly, nonatomic) ARUIRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_renderImage;
- (void)_updateRenderContext;
- (id)initWithRingGroup:(id)a0;
- (id)initWithRingGroup:(id)a0 renderer:(id)a1;
- (void)ringGroupHasUpdated:(id)a0;

@end
