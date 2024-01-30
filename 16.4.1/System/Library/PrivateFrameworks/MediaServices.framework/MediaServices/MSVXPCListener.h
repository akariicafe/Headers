@class NSString, NSXPCListener;

@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}

- (void)suspend;
- (id)initWithMachServiceName:(id)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (id)localProxy;

@end
