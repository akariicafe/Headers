@class NSString;

@interface VoiceDialFacetimeRecognitionAction : VSRecognitionURLAction {
    NSString *_contactInfo;
    int _abID;
}

- (void).cxx_destruct;
- (id)perform;
- (id)initWithContactInfo:(id)a0 uid:(int)a1;

@end
