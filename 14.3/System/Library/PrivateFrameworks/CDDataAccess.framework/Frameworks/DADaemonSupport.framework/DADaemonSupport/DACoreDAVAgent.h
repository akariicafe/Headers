@class CoreDAVOptionsTask, NSTimer, NSString;

@interface DACoreDAVAgent : DAAgent <DABabysittable>

@property (retain, nonatomic) CoreDAVOptionsTask *optionsProbe;
@property (retain, nonatomic) NSTimer *optionsTimeoutTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)waiterID;
- (void)dealloc;
- (id)initWithAccount:(id)a0;
- (void)_cancelOptionsTimer;
- (void)_serverProbeTimedOut;
- (void)_probeAndSyncWithBlock:(id /* block */)a0;

@end
