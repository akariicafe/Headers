@class NSString;

@interface _EARSpeakerCodeWriter : NSObject <_EARSpeakerCodeWriterInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTrainingSpeakerCode:(id)a0 inferenceSpeakerCode:(id)a1 accumulatedGradient:(id)a2 nnetVersion:(unsigned long long)a3 numFrames:(unsigned long long)a4 trainingOffset:(unsigned long long)a5 recognitionOffset:(unsigned long long)a6 language:(id)a7;

@end
