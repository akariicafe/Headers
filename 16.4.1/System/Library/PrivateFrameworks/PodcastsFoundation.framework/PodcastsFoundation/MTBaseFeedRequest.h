@interface MTBaseFeedRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void /* unknown type, empty encoding */ storeID;
    void /* unknown type, empty encoding */ showMetadata;
}

- (void)performWithCompletion:(id /* block */)a0;
- (id)init;
- (id)initWithStoreID:(long long)a0;
- (void).cxx_destruct;

@end
