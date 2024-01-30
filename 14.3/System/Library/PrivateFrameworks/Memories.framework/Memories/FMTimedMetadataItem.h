@class NSString, NSDictionary;

@interface FMTimedMetadataItem : NSObject <NSCopying>

@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) NSDictionary *values;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 name:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 values:(id)a3;
- (void)adjustDurationTo:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
