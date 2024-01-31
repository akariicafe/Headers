@class NSString, SATTSEstimateTTSRequestDuration;

@interface VSPluginTTSDurationEstimation : NSObject <AFServiceCommand>

@property (retain, nonatomic) SATTSEstimateTTSRequestDuration *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
