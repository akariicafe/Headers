@class NSString;
@protocol NSXPCProxyCreating, SNResourceCoordinatorXPCProtocol;

@interface SNResourceCoordinatorXPCPublisher : NSObject <SNResourceCoordinatorProtocol> {
    id<SNResourceCoordinatorXPCProtocol, NSXPCProxyCreating> _subscriber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)createSystemAudioAnalyzer;

@end
