@class SFSpeechRecognitionTask, NSArray, NSString, SFTranscription;

@interface AXLTTranscription : NSObject

@property (retain, nonatomic) SFSpeechRecognitionTask *task;
@property (retain, nonatomic) SFTranscription *transcription;
@property (retain, nonatomic) NSArray *nonUpdatingSegments;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly, copy, nonatomic) NSString *formattedString;
@property (readonly, copy, nonatomic) NSArray *segments;

- (void).cxx_destruct;
- (BOOL)_shouldUseNonUpdatingSegments;
- (id)initWithRecognitionTask:(id)a0 transcription:(id)a1 previousTranscription:(id)a2;

@end
