@interface CoreIDVShared.IdentityBindingDetails : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ templateUUIDs;
    void /* unknown type, empty encoding */ passDescriptions;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
