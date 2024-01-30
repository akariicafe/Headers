@class NSString, SiriTTSAudibleContext;

@interface SiriTTSAudioRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ audio;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audibleContext;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)audioSessionId;
- (id /* block */)didStartSpeaking;
- (BOOL)immediate;
- (id)initWithAudio:(id)a0;
- (void)setAudioSessionId:(unsigned int)a0;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setImmediate:(BOOL)a0;
- (void)setSiriRequestId:(id)a0;
- (id)siriRequestId;

@end
