@class NSString, RCPSyntheticEventStream;

@interface CRNBlockScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters>

@property (copy, nonatomic) id /* block */ composerBlock;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (copy, nonatomic) NSString *testName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 withComposerBlock:(id /* block */)a1;
- (id)initWithTestName:(id)a0 withComposerBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
