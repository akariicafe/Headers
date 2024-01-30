@protocol CRCard;

@interface VSUIAsyncLoadingCard : CRBasicCard {
    id<CRCard> _storedCard;
}

- (BOOL)asynchronous;
- (void).cxx_destruct;
- (id)initWithCard:(id)a0;
- (void)loadCardWithCompletion:(id /* block */)a0;

@end
