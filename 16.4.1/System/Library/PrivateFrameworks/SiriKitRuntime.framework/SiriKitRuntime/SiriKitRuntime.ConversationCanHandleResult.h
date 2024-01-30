@interface SiriKitRuntime.ConversationCanHandleResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ directlySupported;
    void /* unknown type, empty encoding */ exclude;
    void /* unknown type, empty encoding */ reformedInput;
    void /* unknown type, empty encoding */ flowIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
