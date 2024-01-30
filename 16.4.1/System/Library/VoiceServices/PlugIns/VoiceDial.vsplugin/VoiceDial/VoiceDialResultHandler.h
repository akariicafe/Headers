@class NSString, VoiceDialNameDataSource;

@interface VoiceDialResultHandler : NSObject <VSRecognitionResultHandler> {
    void *_addressBook;
    VoiceDialNameDataSource *_nameSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void *)_addressBook;
- (id)_nameSource;
- (id)actionForRecognitionResults:(id)a0;
- (id)_phoneticNames:(id)a0 fromDictionary:(id)a1;

@end
