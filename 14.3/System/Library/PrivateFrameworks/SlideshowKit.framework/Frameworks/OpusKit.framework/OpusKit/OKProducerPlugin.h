@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {
    Class _producerClass;
    long long _loadCounter;
    NSArray *_loadedClasses;
}

@property (retain, nonatomic) OKProducerContent *content;

- (id)init;
- (unsigned long long)family;
- (void)dealloc;
- (id)localizedName;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (BOOL)_load;
- (id)initWithURL:(id)a0;
- (void)_unload;
- (id)contentIdentifier;
- (id)backgroundColor;
- (id)audioURLs;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (BOOL)isLoaded;
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
