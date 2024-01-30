@class NSString;

@interface SNSignalThresholdResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNTimeRangeProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSignalThresholdResult:(id)a0;

@end
