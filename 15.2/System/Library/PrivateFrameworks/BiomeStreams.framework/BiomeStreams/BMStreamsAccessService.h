@class NSString, NSXPCListener;

@interface BMStreamsAccessService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    unsigned long long _signpost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
