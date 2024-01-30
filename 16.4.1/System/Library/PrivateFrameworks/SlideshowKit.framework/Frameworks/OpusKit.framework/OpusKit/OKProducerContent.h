@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle

@property (nonatomic) OKProducerPlugin *plugin;

- (id)initWithURL:(id)a0;
- (BOOL)isLoaded;
- (void)dealloc;

@end
