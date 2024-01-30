@interface CoreIDVShared.IdentityProofingAssetData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ twoX;
    void /* unknown type, empty encoding */ threeX;
    void /* unknown type, empty encoding */ assetID;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
