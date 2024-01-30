@class NSString;

@interface VoiceDialRecognitionAction : VSRecognitionURLAction {
    NSString *_phoneNumber;
    int _uid;
}

- (id)perform;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0 uid:(int)a1;

@end
