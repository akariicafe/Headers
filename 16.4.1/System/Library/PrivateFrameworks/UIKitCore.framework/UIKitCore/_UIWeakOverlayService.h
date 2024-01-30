@class NSString, _UIOverlayService;

@interface _UIWeakOverlayService : NSObject <_UIOverlayServiceServerToClientInterface>

@property (readonly, weak, nonatomic) _UIOverlayService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (oneway void)handleOverlayResponse:(id)a0;

@end
