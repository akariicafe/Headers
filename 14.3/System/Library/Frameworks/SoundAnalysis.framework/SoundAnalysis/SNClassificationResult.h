@class NSArray, NSString;

@interface SNClassificationResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNResult>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *classifications;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToClassificationResult:(id)a0;

@end
