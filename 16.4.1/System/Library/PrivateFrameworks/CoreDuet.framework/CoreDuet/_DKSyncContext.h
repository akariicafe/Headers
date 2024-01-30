@class NSString, _DKKnowledgeStorage;

@interface _DKSyncContext : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) _DKKnowledgeStorage *storage;

+ (id)new;

- (id)initWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
