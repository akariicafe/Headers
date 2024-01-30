@class NSString, NSObject, NSXPCConnection;
@protocol HearingMLHelperServiceDelegate, OS_dispatch_queue;

@interface HearingMLHelperService : NSObject <HearingMLHelperServiceInterfaceProtocol> {
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<HearingMLHelperServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_destroyXPCConnection;
- (id)_serviceProxy;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)trainWithDetectorID:(id)a0 hallucinatorPath:(id)a1 pretrainedWeightsPath:(id)a2 resultHandler:(id /* block */)a3;

@end
