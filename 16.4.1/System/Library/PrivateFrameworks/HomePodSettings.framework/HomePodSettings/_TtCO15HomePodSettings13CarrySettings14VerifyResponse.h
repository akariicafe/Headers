@interface _TtCO15HomePodSettings13CarrySettings14VerifyResponse : COMessageChannelResponse {
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ success;
    void /* unknown type, empty encoding */ type;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
