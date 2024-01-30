@interface HPSBetaEnrollmentStateChangeResponse : COMessageChannelResponse {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ success;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
