@class NSString, TSgPTPPort, NSObject;
@protocol OS_dispatch_queue;

@interface TSPortInterface : NSObject <TSgPTPNetworkPortClient> {
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    void /* function */ *_macLookupTimeoutCallback;
    void *_macLookupTimeoutRefcon;
}

@property (retain, nonatomic) TSgPTPPort *port;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
