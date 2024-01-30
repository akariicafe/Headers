@class NSString;

@interface CoreIDVShared.IdentityProofingImageDimensions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ idFront;
    void /* unknown type, empty encoding */ idBack;
    void /* unknown type, empty encoding */ selfie;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
