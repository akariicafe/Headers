@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {
    Class _producerClass;
    long long _loadCounter;
    NSArray *_loadedClasses;
}

@property (retain, nonatomic) OKProducerContent *content;

- (unsigned long long)family;
- (id)contentIdentifier;
- (id)localizedName;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (BOOL)isLoaded;
- (id)initWithURL:(id)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)backgroundColor;
- (void)_unload;
- (id)init;
- (void)dealloc;
- (BOOL)_load;
- (id)audioURLs;
- (id)supportedResolutions;
- (void)setupJavascriptContext:(id)a0;
- (id)exportedClassNames;
- (BOOL)hasLoadedClass:(Class)a0;
- (double)minimumContentVersion;
- (id)producerWithPresentation:(id)a0;
- (BOOL)loadRetain;
- (void)unloadRelease;
- (void)_bundleDidLoad:(id)a0;
- (BOOL)hasExportedClass:(Class)a0;

@end
