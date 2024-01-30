@class NSArray, AUAudioUnitBusArray;

@interface MTMacinTalkAUSPAudioUnit : AVSpeechSynthesisProviderAudioUnit <MacinTalkPhraseProcessorDelegate> {
    void /* unknown type, empty encoding */ outputBus;
    void /* unknown type, empty encoding */ _outputBusses;
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ currentPhraseProcessor;
    void /* unknown type, empty encoding */ currentPlainTalkString;
    void /* unknown type, empty encoding */ currentBuffer;
    void /* unknown type, empty encoding */ currentSegmentOffset;
    void /* unknown type, empty encoding */ ssmlMarkerPosition;
    void /* unknown type, empty encoding */ voice;
    void /* unknown type, empty encoding */ lastVoice;
}

@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, readonly) id /* block */ internalRenderBlock;
@property (nonatomic, copy) NSArray *speechVoices;

- (void)synthesizeSpeechRequest:(id)a0;
- (void)didGenerateSamplesForPhoneme:(long long)a0 phonemeOpcode:(short)a1;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (void)didFinishGeneratingSamples;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (void)didGenerateSamplesForWord:(long long)a0 stringPosition:(unsigned long long)a1 length:(unsigned short)a2;
- (void)cancelSpeechRequest;
- (void).cxx_destruct;
- (void)didGenerateSamplesForSync:(long long)a0 message:(unsigned int)a1;

@end
