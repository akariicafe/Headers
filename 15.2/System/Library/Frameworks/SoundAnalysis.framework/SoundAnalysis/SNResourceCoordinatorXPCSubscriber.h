@class NSString;
@protocol SNResourceCoordinatorProtocol;

@interface SNResourceCoordinatorXPCSubscriber : NSObject <SNResourceCoordinatorProtocol, SNResourceCoordinatorXPCProtocol> {
    id<SNResourceCoordinatorProtocol> _receiver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithReceiver:(id)a0;
- (id)createSystemAudioAnalyzer;
- (void)xpcCreateSystemAudioAnalyzerWithCompletionHandler:(id /* block */)a0;

@end
