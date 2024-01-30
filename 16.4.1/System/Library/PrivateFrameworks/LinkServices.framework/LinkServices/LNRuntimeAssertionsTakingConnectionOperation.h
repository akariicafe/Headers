@class NSSet, CLInUseAssertion, NSString;

@interface LNRuntimeAssertionsTakingConnectionOperation : LNInterfaceConnectionOperation <LNRuntimeAssertionsTaking>

@property (retain, nonatomic) NSSet *runtimeAssertions;
@property (retain, nonatomic) CLInUseAssertion *locationAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
