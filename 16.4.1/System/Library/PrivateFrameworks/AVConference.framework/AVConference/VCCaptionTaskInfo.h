@class SFSpeechRecognitionTask;

@interface VCCaptionTaskInfo : NSObject

@property SFSpeechRecognitionTask *task;
@property long long token;
@property unsigned int updateNumber;
@property unsigned int utteranceNumber;

- (id)initWithTask:(id)a0 token:(long long)a1 utteranceNumber:(unsigned int)a2;

@end
