@class NSString;
@protocol SCRTargetContextProvider, SCRSyncTargetContextProvider, SCRAsyncTargetContextProvider;

@interface SCRTaskTargetConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *targetIdentifier;
@property (readonly, nonatomic) id<SCRSyncTargetContextProvider> syncContextProvider;
@property (readonly, nonatomic) id<SCRAsyncTargetContextProvider> asyncContextProvider;
@property (readonly, nonatomic) id<SCRTargetContextProvider> contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createContextWithCompletion:(id /* block */)a0;
- (id)initWithTarget:(id)a0 syncContextProvider:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTarget:(id)a0 syncProvider:(id)a1 asyncProvider:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithTarget:(id)a0 contextProvider:(id)a1;
- (id)succinctDescription;
- (id)_expectedTargetContextProtocol;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (Class)_expectedTargetContextClass;
- (id)succinctDescriptionBuilder;
- (void)invalidateTargetContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithTarget:(id)a0 asyncContextProvider:(id)a1;
- (void)_validateContext:(id)a0;

@end
