@class NSString;
@protocol NURenderStatistics;

@interface _PIDisparitySampleResult : _NURenderResult <PIDisparitySampleResult>

@property (readonly, nonatomic) float sampledDisparityValue;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDisparityValue:(float)a0;

@end
