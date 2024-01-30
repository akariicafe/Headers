@interface SiriSessionStoreClient.SessionStateId : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ assistantId;
    void /* unknown type, empty encoding */ deviceId;
    void /* unknown type, empty encoding */ userId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
