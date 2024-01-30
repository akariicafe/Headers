@class _DUIImageComponent, _DUIPreview;

@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long itemIndex;
@property (retain, nonatomic) _DUIImageComponent *imageComponent;
@property (copy, nonatomic) _DUIPreview *preview;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) struct CGVector { double dx; double dy; } velocity;
@property (nonatomic) struct CGVector { double dx; double dy; } targetVelocity;
@property (nonatomic) BOOL constrainSize;
@property (nonatomic) BOOL flipped;
@property (nonatomic) BOOL precisionMode;
@property (nonatomic) double rotation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)createSnapshotView;

@end
