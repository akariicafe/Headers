@class NSString;

@interface PKTranscriptionResult : NSObject

@property (readonly, copy, nonatomic) NSString *transcription;
@property (readonly, nonatomic) BOOL didShowHUD;

- (void).cxx_destruct;
- (id)initWithTranscription:(id)a0 didShowHUD:(BOOL)a1;

@end
