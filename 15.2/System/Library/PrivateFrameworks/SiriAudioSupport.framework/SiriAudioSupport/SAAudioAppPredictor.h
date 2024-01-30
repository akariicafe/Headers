@interface SAAudioAppPredictor : NSObject {
    void /* unknown type, empty encoding */ selector;
    void /* unknown type, empty encoding */ caller;
}

- (id)initWithCaller:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)predictWithSearch:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)warmWithCompletion:(id /* block */)a0;
- (void)disambiguationSelectedWithBundleIdentifier:(id)a0 requestId:(id)a1;

@end
