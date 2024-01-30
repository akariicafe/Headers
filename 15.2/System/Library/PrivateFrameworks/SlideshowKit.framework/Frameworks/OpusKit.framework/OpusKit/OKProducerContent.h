@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle

@property (nonatomic) OKProducerPlugin *plugin;

- (BOOL)isLoaded;
- (id)initWithURL:(id)a0;
- (void)dealloc;

@end
