@class NSString;
@protocol NURenderStatistics;

@interface _PIParallaxClockMaterialResult : _NURenderResult <PIParallaxClockMaterialResult>

@property (readonly, nonatomic) double clockAreaLuminance;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClockAreaLuminance:(double)a0;

@end
