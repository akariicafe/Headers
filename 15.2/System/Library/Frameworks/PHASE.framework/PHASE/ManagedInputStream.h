@class PHASEExternalInputStreamDefinition;

@interface ManagedInputStream : NSObject

@property (nonatomic, getter=isStreamPaused) BOOL streamPaused;
@property (retain, nonatomic) PHASEExternalInputStreamDefinition *definition;

- (void).cxx_destruct;
- (id)initWithPaused:(BOOL)a0 definition:(id)a1;

@end
