@class NSString, VoiceDialNameDataSource;

@interface VoiceDialResultValidator : NSObject <VSRecognitionResultValidator> {
    void *_addressBook;
    VoiceDialNameDataSource *_nameSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void *)_addressBook;
- (id)_nameSource;
- (id)validRecognitionResultFromRecognitionResult:(id)a0;
- (id)validRecognitionResultFromRecognitionResult:(id)a0 knownDisambiguationValues:(id)a1;

@end
