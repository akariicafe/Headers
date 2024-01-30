@class NSString, NSMutableArray, _EARLMTKaldiVocab;

@interface TextProcessorInference : NSObject <TextProcessor> {
    NSMutableArray *_text;
    _EARLMTKaldiVocab *_vocab;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addText:(id)a0;
- (id)initWithLength:(unsigned long long)a0 vocab:(id)a1 BOS:(unsigned long long)a2;
- (id)initWithVocab:(id)a0;
- (void)resetWithBOS:(unsigned long long)a0;
- (id)textSequence;

@end
