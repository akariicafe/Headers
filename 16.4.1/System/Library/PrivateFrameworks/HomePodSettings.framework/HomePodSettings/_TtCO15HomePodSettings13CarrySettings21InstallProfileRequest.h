@interface _TtCO15HomePodSettings13CarrySettings21InstallProfileRequest : COMessageChannelRequest {
    void /* unknown type, empty encoding */ audienceIdentifier;
    void /* unknown type, empty encoding */ profileData;
    void /* unknown type, empty encoding */ profileVariant;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
