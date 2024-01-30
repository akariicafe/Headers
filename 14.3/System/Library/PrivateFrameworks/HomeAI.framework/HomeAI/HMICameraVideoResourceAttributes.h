@class NSString, NSDate;

@interface HMICameraVideoResourceAttributes : HMFObject <HMFLogging>

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } assetDuration;
@property (readonly) NSDate *creationDate;
@property (readonly) unsigned long long lastSequenceNumber;
@property (readonly) unsigned long long firstSequenceNumber;
@property (readonly) double nominalFrameRate;
@property (readonly) struct CGSize { double width; double height; } dimensions;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } baseDecodeTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetData:(id)a0 error:(id *)a1;
- (id)initWithAssetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 creationDate:(id)a1 firstSequenceNumber:(unsigned long long)a2 lastSequenceNumber:(unsigned long long)a3;
- (id)initWithAssetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 creationDate:(id)a1 firstSequenceNumber:(unsigned long long)a2 lastSequenceNumber:(unsigned long long)a3 nominalFrameRate:(double)a4 dimensions:(struct CGSize { double x0; double x1; })a5 baseDecodeTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6;
- (id)initWithAssetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 creationDate:(id)a1;

@end
