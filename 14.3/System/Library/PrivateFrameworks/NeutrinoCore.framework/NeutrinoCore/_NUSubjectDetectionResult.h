@class NSArray, NSString;
@protocol NURenderStatistics;

@interface _NUSubjectDetectionResult : _NURenderResult <NUSubjectDetectionResult>

@property (readonly, copy, nonatomic) NSArray *observations;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithObservations:(id)a0;

@end
