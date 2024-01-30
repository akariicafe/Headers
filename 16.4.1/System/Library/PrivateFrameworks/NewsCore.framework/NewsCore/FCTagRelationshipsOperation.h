@class FCTagRelationships;
@protocol FCTagProviding, FCContentContext;

@interface FCTagRelationshipsOperation : FCOperation

@property (readonly, copy, nonatomic) id<FCContentContext> context;
@property (readonly, copy, nonatomic) id<FCTagProviding> tag;
@property (retain, nonatomic) FCTagRelationships *resultTagRelationships;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 tag:(id)a1;

@end
