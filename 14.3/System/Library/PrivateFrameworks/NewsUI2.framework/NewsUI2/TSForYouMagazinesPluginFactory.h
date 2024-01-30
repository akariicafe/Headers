@interface TSForYouMagazinesPluginFactory : NSObject <TSForYouMagazinesPluginFactoryType> {
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ layoutOptionsProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)createPluginWithIdentifier:(id)a0 group:(id)a1;

@end
