@class _PASXPCClientHelper;

@interface ATXInfoTimelineDonationClient : NSObject {
    _PASXPCClientHelper *_xpcClientHelper;
}

+ (id)sharedInstance;

- (void)timelineDidReloadForWidget:(id)a0 parentApp:(id)a1 withEntries:(id)a2 completion:(id /* block */)a3;
- (id)_init;
- (id)init;
- (void).cxx_destruct;

@end
