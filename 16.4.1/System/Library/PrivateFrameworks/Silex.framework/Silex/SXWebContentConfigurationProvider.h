@class NSString, NSLocale;
@protocol SXStoreFrontProvider, SXPresentationAttributesProvider, SWLocation;

@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider>

@property (readonly, nonatomic) id<SXPresentationAttributesProvider> presentationAttributesProvider;
@property (readonly, nonatomic) id<SXStoreFrontProvider> storeFrontProvider;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) id<SWLocation> location;
@property (copy, nonatomic) id /* block */ changeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)onChange:(id /* block */)a0;
- (id)configurationForSize:(struct CGSize { double x0; double x1; })a0 dataSources:(id)a1 sourceURL:(id)a2;
- (id)initWithPresentationAttributesProvider:(id)a0 storeFrontProvider:(id)a1 locale:(id)a2 location:(id)a3;
- (void)invokeChangeListener;
- (void)presentationAttributesDidChangeFrom:(id)a0 toAttributes:(id)a1;

@end
