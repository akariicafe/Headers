@class VCCaptionsTranscription;

@interface VCCaptionsReceiver : NSObject {
    unsigned int _captionsLastUtteranceNumber;
    unsigned int _captionsLastUpdateNumber;
    struct opaqueVCCaptionsDecoder { } *_captionsDecoder;
}

@property (readonly) id delegate;
@property (retain, nonatomic) VCCaptionsTranscription *currentTranscription;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)processCaptionsData:(id)a0;

@end
