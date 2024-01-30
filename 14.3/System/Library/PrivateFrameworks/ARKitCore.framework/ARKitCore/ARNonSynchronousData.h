@class NSArray, NSString;

@interface ARNonSynchronousData : NSObject <ARResultData>

@property (retain) NSArray *gatheredData;
@property (nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)resultDataOfClass:(Class)a0;
- (id)initWithGatheredData:(id)a0 timestamp:(double)a1;

@end
