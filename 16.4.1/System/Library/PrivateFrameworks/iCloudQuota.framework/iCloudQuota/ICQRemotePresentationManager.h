@class NSString, ICQRemoteContext;

@interface ICQRemotePresentationManager : NSObject <SBSRemoteAlertHandleObserver>

@property (readonly, nonatomic) ICQRemoteContext *remoteContext;
@property (copy, nonatomic) id /* block */ presentationWasInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
