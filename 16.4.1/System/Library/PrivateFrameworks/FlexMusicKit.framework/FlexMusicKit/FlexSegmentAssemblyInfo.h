@class FlexSegment, NSURL;

@interface FlexSegmentAssemblyInfo : NSObject

@property (retain, nonatomic) FlexSegment *segment;
@property (nonatomic) long long barsUsed;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long offset;
@property (nonatomic) long long duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
