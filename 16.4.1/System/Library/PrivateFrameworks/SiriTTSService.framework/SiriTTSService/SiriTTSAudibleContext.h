@class NSUUID;

@interface SiriTTSAudibleContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ siriRequestId;
    void /* unknown type, empty encoding */ didStartSpeaking;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ audioSessionId;
@property (nonatomic) void /* unknown type, empty encoding */ immediate;
@property (nonatomic, copy) NSUUID *siriRequestId;
@property (nonatomic, copy) id /* block */ didStartSpeaking;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
