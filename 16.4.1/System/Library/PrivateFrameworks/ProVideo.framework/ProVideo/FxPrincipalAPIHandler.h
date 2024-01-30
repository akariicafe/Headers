@class NSString, NSObject;
@protocol FxPlugPrincipalDelegate;

@interface FxPrincipalAPIHandler : NSObject <PROAPIObject> {
    NSObject<FxPlugPrincipalDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (id)servicePrincipal;

@end
