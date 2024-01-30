@class NSString;

@interface DTKPCPUCounterAllocatorRecord : NSObject

@property (nonatomic) struct kpep_event { } *kpepEvent;
@property (nonatomic) unsigned long long hwIdx;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventOrAliasName;
@property (retain, nonatomic) NSString *counterName;
@property (nonatomic) BOOL isPMI;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 nameOrAlias:(id)a1 counterName:(id)a2 kpepEvent:(struct kpep_event { } *)a3 isPMI:(BOOL)a4 hwIdx:(unsigned long long)a5;

@end
