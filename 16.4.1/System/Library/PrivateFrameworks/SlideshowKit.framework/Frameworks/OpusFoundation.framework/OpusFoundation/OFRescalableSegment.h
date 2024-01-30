@class NSString;

@interface OFRescalableSegment : NSObject <OFRescalableSegment>

@property double defaultDuration;
@property double minimumDuration;
@property double maximumDuration;
@property double compressibility;
@property double expandability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lessRescalableSegmentWithDefaultDuration:(double)a0 minimumDuration:(double)a1;
+ (id)lessRescalableSegmentWithDefaultDuration:(double)a0 minimumDuration:(double)a1 maximumDuration:(double)a2;
+ (id)moreRescalableSegmentWithDefaultDuration:(double)a0 minimumDuration:(double)a1;
+ (id)moreRescalableSegmentWithDefaultDuration:(double)a0 minimumDuration:(double)a1 maximumDuration:(double)a2;
+ (id)nonRescalableSegmentWithDuration:(double)a0;
+ (id)rescalableSegmentWithDefaultDuration:(double)a0 minimumDuration:(double)a1;
+ (id)rescalableSegmentWithDefaultDuration:(double)a0 minimumDuration:(double)a1 maximumDuration:(double)a2;


@end
