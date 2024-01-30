@class NSUUID, PHASEExternalInputStreamDefinition;

@interface ManagedInputStream : NSObject

@property (nonatomic, getter=isStreamPaused) BOOL streamPaused;
@property (retain, nonatomic) PHASEExternalInputStreamDefinition *definition;
@property (retain, nonatomic) NSUUID *attributedClientID;

- (void).cxx_destruct;
- (id)initWithPaused:(BOOL)a0 attributedTo:(id)a1 definition:(id)a2;

@end
