@class NSString;
@protocol SNResourceCoordinatorProtocol;

@interface SNResourceCoordinatorXPCSubscriber : NSObject <SNResourceCoordinatorProtocol, SNResourceCoordinatorXPCProtocol> {
    id<SNResourceCoordinatorProtocol> _receiver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReceiver:(id)a0;
- (id)createSystemAudioAnalyzer;
- (void)xpcCreateSystemAudioAnalyzerWithCompletionHandler:(id /* block */)a0;

@end
