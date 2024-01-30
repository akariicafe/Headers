@class NSArray, RCPSyntheticEventStream, NSString;

@interface RPTGroupScrollTestParameters : NSObject <RPTScrollTestParameters, RPTBlockBasedScrollTestParameters>

@property (retain, nonatomic) NSArray *parameters;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (copy, nonatomic) NSString *testName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithTestName:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id /* block */)composerBlock;

@end
