@class NSString, VNSaliencyImageObservation;
@protocol NURenderStatistics;

@interface _NUSaliencyResult : _NURenderResult <NUSaliencyResult>

@property (readonly, nonatomic) VNSaliencyImageObservation *observation;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObservation:(id)a0;
- (void).cxx_destruct;

@end
