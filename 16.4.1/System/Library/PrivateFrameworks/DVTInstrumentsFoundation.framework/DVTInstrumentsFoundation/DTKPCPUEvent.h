@class NSString;

@interface DTKPCPUEvent : NSObject {
    struct kpep_event { } *_kpepEvent;
    NSString *_displayName;
}

@property (retain, nonatomic) NSString *alias;
@property (readonly, nonatomic) struct kpep_event { } *kpepEvent;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *aliasOrName;
@property (readonly, retain, nonatomic) NSString *displayName;
@property (readonly, retain, nonatomic) NSString *definition;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 alias:(id)a1 definition:(id)a2 kpepEvent:(struct kpep_event { } *)a3;

@end
