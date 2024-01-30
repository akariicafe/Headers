@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (copy, nonatomic) NSNumber *snapshotWidth;
@property (nonatomic) BOOL afterScreenUpdates;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
