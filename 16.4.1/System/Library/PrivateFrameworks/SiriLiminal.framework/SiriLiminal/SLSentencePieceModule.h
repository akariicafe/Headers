@class NSString, EARSentencePieceModule;

@interface SLSentencePieceModule : NSObject <SLODLDTokenizerComponent>

@property (retain) EARSentencePieceModule *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)encodeUtterance:(id)a0;
- (id)initWithConfigFile:(id)a0;
- (long long)setSPMEncoderOptions:(id)a0;

@end
