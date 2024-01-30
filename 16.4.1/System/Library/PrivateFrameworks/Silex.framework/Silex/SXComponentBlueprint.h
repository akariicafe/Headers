@class SXLayoutBlueprint, NSDictionary, SXComponentSizer;
@protocol SXComponent, SXComponentLayout, SXComponentState;

@interface SXComponentBlueprint : NSObject <NSSecureCoding, NSCopying> {
    BOOL _hasValidSize;
    BOOL _hasValidPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) SXLayoutBlueprint *parentLayoutBlueprint;
@property (nonatomic) struct CGSize { double width; double height; } suggestedSizeAfterInvalidation;
@property (retain, nonatomic) id<SXComponentState> componentState;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSDictionary *infoFromLayouting;
@property (readonly, nonatomic) id<SXComponent> component;
@property (readonly, nonatomic) SXComponentSizer *componentSizer;
@property (readonly, nonatomic) id<SXComponentLayout> componentLayout;
@property (readonly, nonatomic) SXLayoutBlueprint *rootLayoutBlueprint;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } columnRange;
@property (readonly, nonatomic) BOOL hasValidLayout;
@property (readonly, nonatomic) BOOL hasValidSize;
@property (readonly, nonatomic) BOOL hasValidPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } absoluteFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } componentViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundViewFrame;

- (void)invalidateLayout;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updatePosition:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidateSize;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentSizer:(id)a2;
- (void)invalidatePosition;
- (void)storeInformationForRenderingPhase:(id)a0;
- (void)updateSize:(struct CGSize { double x0; double x1; })a0;

@end
