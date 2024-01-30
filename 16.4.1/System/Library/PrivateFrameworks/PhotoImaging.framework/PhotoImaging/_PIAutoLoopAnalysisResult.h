@class NSDictionary, NSString;
@protocol NURenderStatistics;

@interface _PIAutoLoopAnalysisResult : _NURenderResult <PIAutoLoopAnalysisResult>

@property (retain) NSDictionary *recipe;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
