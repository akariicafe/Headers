@class NSData, NSArray, NSString;

@interface HMIVideoFragment : HMFObject <HMFLogging, NSSecureCoding> {
    BOOL _attributesLoaded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSData *sanitizedData;
@property (readonly, copy) NSData *sanitizedSeperableSegment;
@property (readonly) const struct opaqueCMFormatDescription { } *videoFormatDescription;
@property (readonly) const struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } videoTrackTimeRange;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } audioTrackTimeRange;
@property (readonly) BOOL frameReorderingRequired;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } baseDecodeTimeStamp;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } firstVideoSampleByteRange;
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

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1 sequenceNumbers:(id)a2;
- (id)placeholderCopy;
- (void)_ensureAttributes;
- (id)initWithData:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithFragments:(id)a0;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 firstVideoSampleByteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 sequenceNumbers:(id)a3;
- (id)initWithInitializationSegment:(id)a0 separableSegment:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 sequenceNumbers:(id)a3 firstVideoSampleByteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (BOOL)isCombinableWithFragment:(id)a0;
- (id)redactedCopy;
- (id)redactedCopyWithMetadata;

@end
