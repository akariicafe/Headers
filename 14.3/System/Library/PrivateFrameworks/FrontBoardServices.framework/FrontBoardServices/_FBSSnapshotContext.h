@class FBSDisplayConfiguration, NSOrderedSet;

@interface _FBSSnapshotContext : NSObject <NSCopying>

@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) NSOrderedSet *layers;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double width; double height; } snapshotSize;
@property (nonatomic) BOOL allowsProtectedContent;

- (id)initWithDisplayConfiguration:(id)a0 layer:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayConfiguration:(id)a0 layers:(id)a1;

@end
