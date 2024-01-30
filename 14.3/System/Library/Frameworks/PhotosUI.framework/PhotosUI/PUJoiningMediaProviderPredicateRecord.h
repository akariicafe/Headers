@class PUMediaProvider;

@interface PUJoiningMediaProviderPredicateRecord : NSObject

@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly, copy, nonatomic) id /* block */ predicate;

- (void).cxx_destruct;
- (id)initWithMediaProvider:(id)a0 predicate:(id /* block */)a1;

@end
