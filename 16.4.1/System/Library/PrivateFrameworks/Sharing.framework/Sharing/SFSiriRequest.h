@class VSSpeechRequest;

@interface SFSiriRequest : NSObject

@property (nonatomic) double delaySecs;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) id owner;
@property (copy, nonatomic) id /* block */ speechCompletion;
@property (copy, nonatomic) id /* block */ speechStartHandler;
@property (copy, nonatomic) VSSpeechRequest *speechSynthesisRequest;
@property (retain, nonatomic) VSSpeechRequest *speechUtteranceRequest;
@property (nonatomic) unsigned long long startTicks;
@property (nonatomic) BOOL synthesizing;

- (void).cxx_destruct;

@end
