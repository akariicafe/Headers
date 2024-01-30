@class NSString;

@interface CloudFeature : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ featureID;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ accessToken;
    void /* unknown type, empty encoding */ ttl;
    void /* unknown type, empty encoding */ altDSID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
