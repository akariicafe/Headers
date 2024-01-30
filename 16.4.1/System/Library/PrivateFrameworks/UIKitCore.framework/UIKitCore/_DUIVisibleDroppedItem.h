@class _DUIImageComponent, _DUIPreview;

@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding> {
    struct CGPoint { double x; double y; } _center;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long itemIndex;
@property (retain, nonatomic) _DUIImageComponent *imageComponent;
@property (copy, nonatomic) _DUIPreview *preview;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGVector { double dx; double dy; } velocity;
@property (nonatomic) struct CGVector { double dx; double dy; } targetVelocity;
@property (nonatomic) BOOL constrainSize;
@property (nonatomic) BOOL flipped;
@property (nonatomic) BOOL precisionMode;
@property (nonatomic) double rotation;

- (struct CGPoint { double x0; double x1; })center;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)createSnapshotView;

@end
