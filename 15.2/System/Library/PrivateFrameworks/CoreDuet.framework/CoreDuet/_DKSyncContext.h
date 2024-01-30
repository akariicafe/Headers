@class NSString, _DKKnowledgeStorage;

@interface _DKSyncContext : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) _DKKnowledgeStorage *storage;

+ (id)new;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;

@end
