@class NSObject;
@protocol OS_dispatch_source;

@interface SymptomExpertSystemState : ExpertSystemStateCore

@property (retain, nonatomic) NSObject<OS_dispatch_source> *strobe;

+ (id)createStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryPreds:(id)a2;

- (void).cxx_destruct;

@end
