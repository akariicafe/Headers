@class NSString;

@interface VoiceDialRecognitionAction : VSRecognitionURLAction {
    NSString *_phoneNumber;
    int _uid;
}

- (void).cxx_destruct;
- (id)perform;
- (id)initWithPhoneNumber:(id)a0 uid:(int)a1;

@end
