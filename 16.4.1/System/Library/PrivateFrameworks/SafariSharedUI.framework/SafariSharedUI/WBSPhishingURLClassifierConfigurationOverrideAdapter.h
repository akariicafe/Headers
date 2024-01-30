@class WBSPhishingConfiguration;

@interface WBSPhishingURLClassifierConfigurationOverrideAdapter : NSObject <WBSPhishingURLClassifier>

@property (retain) WBSPhishingConfiguration *configuration;

- (void).cxx_destruct;
- (void)classifyURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
