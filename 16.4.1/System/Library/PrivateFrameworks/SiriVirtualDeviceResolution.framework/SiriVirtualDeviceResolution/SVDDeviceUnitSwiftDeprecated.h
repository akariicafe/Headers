@interface SVDDeviceUnitSwiftDeprecated : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ assistantId;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ roomName;
    void /* unknown type, empty encoding */ proximity;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
