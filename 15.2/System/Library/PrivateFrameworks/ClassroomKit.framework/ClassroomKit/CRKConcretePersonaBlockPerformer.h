@class NSString;

@interface CRKConcretePersonaBlockPerformer : NSObject <CRKPersonaBlockPerforming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentPersona;
- (void)adoptPersonaWithUniqueString:(id)a0 andPerformBlock:(id /* block */)a1;

@end
