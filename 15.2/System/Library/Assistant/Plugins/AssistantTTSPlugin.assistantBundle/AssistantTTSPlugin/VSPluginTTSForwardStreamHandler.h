@class NSString, SATTSSpeechSynthesisStreaming;

@interface VSPluginTTSForwardStreamHandler : NSObject <AFServiceCommand>

@property (retain, nonatomic) SATTSSpeechSynthesisStreaming *streamObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
