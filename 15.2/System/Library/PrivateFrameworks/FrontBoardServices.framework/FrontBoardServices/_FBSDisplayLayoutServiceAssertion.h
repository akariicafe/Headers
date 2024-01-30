@class FBSDisplayLayout, NSString, _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutServiceAssertion : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _FBSDisplayLayoutService *_lock_service;
}

@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0 qos:(char)a1 observer:(id /* block */)a2;

@end
