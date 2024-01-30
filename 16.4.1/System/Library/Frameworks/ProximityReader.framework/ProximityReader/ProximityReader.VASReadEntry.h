@interface ProximityReader.VASReadEntry : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mobileToken;
    void /* unknown type, empty encoding */ customerVASData;
    void /* unknown type, empty encoding */ merchantIdentifier;
    void /* unknown type, empty encoding */ resultCode;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
