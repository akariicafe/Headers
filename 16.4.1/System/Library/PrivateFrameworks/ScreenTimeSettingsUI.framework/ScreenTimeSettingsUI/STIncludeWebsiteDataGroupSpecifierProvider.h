@class PSSpecifier;

@interface STIncludeWebsiteDataGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *toggleIncludeWebsiteDataSpecifier;

- (void)setCoordinator:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (id)includeWebsiteData:(id)a0;
- (void)setIncludeWebsiteData:(id)a0 specifier:(id)a1;

@end
