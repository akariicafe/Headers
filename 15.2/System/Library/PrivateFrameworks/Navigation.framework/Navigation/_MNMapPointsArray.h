@interface _MNMapPointsArray : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) struct { double x0; double x1; } *mapPoints;
@property (readonly, nonatomic) void *points;

- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
