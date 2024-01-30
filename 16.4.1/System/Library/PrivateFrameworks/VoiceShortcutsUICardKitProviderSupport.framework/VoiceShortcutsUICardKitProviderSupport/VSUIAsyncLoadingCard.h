@protocol CRCard;

@interface VSUIAsyncLoadingCard : CRBasicCard {
    id<CRCard> _storedCard;
}

- (void).cxx_destruct;
- (BOOL)asynchronous;
- (id)initWithCard:(id)a0;
- (void)loadCardWithCompletion:(id /* block */)a0;

@end
