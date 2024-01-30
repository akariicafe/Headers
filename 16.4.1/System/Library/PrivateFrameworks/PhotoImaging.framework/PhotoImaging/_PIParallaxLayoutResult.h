@class NSDictionary, PFParallaxLayout, NSString;
@protocol NURenderStatistics;

@interface _PIParallaxLayoutResult : _NURenderResult <PIParallaxLayoutResult>

@property (retain, nonatomic) PFParallaxLayout *layout;
@property (copy, nonatomic) NSDictionary *scores;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
