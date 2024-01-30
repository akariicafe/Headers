@class NSError, NSString;

@interface WFMeasureThroughputResult : NSObject <WFMeasureResult>

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) double downlinkThroughput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResult:(double)a0 andError:(id)a1;

@end
