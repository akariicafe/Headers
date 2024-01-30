@interface GEOLocalTimeInterval : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalTimeRange:(struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0;
- (id)initWithStartTime:(double)a0 endTime:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end
