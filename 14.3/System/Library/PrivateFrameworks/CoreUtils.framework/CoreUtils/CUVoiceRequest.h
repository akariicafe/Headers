@class VSSpeechRequest;

@interface CUVoiceRequest : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) id owner;
@property (retain, nonatomic) VSSpeechRequest *speechRequest;

- (void).cxx_destruct;

@end
