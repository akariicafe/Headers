@class NSString;
@protocol FMDExtAccessoryDelegateProtocol;

@interface FMDExtHostContext : FMDExtensionContext <FMDExtAccessoryDelegateProtocol>

@property (retain, nonatomic) id<FMDExtAccessoryDelegateProtocol> accessoryDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
