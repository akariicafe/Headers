@protocol ASOOverlayConfiguration;

@interface SKOverlayConfiguration : NSObject

@property (readonly, retain, nonatomic) id<ASOOverlayConfiguration> _backing;

- (void).cxx_destruct;
- (id)_init;
- (id)initWithBacking:(id)a0;

@end
