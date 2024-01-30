@class NSString, IDSDaemonRequestTimer;

@interface IDSRegistrationControlDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    IDSDaemonRequestTimer *_requestTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
