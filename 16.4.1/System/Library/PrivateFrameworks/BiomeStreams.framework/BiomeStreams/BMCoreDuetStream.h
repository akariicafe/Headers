@class _DKEventQuery, NSString;
@protocol _CDUserContext, _DKKnowledgeQuerying;

@interface BMCoreDuetStream : NSObject <BMStream>

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> store;
@property (readonly, nonatomic) id<_CDUserContext> context;
@property (readonly, nonatomic) _DKEventQuery *query;
@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (id)publisherForQuery:(id)a0;
- (id)initWithKnowledgeStore:(id)a0 clientContext:(id)a1 identifier:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
