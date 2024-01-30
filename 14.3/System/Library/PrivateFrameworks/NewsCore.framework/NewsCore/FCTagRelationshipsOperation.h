@class FCTagRelationships;
@protocol FCTagProviding, FCContentContext;

@interface FCTagRelationshipsOperation : FCOperation

@property (readonly, copy, nonatomic) id<FCContentContext> context;
@property (readonly, copy, nonatomic) id<FCTagProviding> tag;
@property (retain, nonatomic) FCTagRelationships *resultTagRelationships;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithContext:(id)a0 tag:(id)a1;
- (void)operationWillFinishWithError:(id)a0;

@end
