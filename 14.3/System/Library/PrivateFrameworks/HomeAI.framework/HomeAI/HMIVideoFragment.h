@class NSData, NSArray, NSString;

@interface HMIVideoFragment : HMFObject <HMFLogging, NSSecureCoding> {
    BOOL _attributesLoaded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *data;
@property (readonly) const struct opaqueCMFormatDescription { } *videoFormatDescription;
@property (readonly) const struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } videoTrackTimeRange;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } audioTrackTimeRange;
@property (readonly) NSData *initializationSegment;
@property (readonly) NSData *separableSegment;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) NSArray *sequenceNumbers;
@property (readonly) unsigned long long sequenceNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)isInitializationSegment:(id)a0 combinableWithInitializationSegment:(id)a1;
+ (BOOL)canFragmentData:(id)a0;
+ (void)fragmentData:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1;
- (id)initWithData:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 sequenceNumbers:(id)a3;
- (void)_ensureAttributes;
- (BOOL)isCombinableWithFragment:(id)a0;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1 sequenceNumbers:(id)a2;

@end
