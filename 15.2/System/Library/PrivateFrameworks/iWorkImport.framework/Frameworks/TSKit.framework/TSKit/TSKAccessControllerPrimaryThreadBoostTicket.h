@class NSString, TSKAccessControllerRunLoop, TSKAccessController;

@interface TSKAccessControllerPrimaryThreadBoostTicket : NSObject <TSKAccessControllerPrimaryThreadBoostTicket> {
    TSKAccessController *_accessController;
    TSKAccessControllerRunLoop *_accessControllerRunLoop;
    struct pthread_override_s { } *_threadOverride;
    _Atomic BOOL _didEndBoosting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAccessController:(id)a0;
- (void)endBoost;

@end
