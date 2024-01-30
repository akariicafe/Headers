@class NSString;

@interface LPiTunesMediaLookupTask : AMSLookup {
    NSString *_identifier;
    NSString *_storefrontCountryCode;
}

- (void)start:(id /* block */)a0;
- (id)callerID;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 storefrontCountryCode:(id)a1;
- (id)_compileQueryParametersWithBundleIds:(id)a0 itemIds:(id)a1;
- (id)sharedBag;

@end
