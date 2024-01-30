@interface PaperKit.SignatureItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ uniqueID;
    void /* unknown type, empty encoding */ baselineOffset;
    void /* unknown type, empty encoding */ creationDate;
    void /* unknown type, empty encoding */ shouldPersist;
    void /* unknown type, empty encoding */ signatureDescription;
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ drawing;
    void /* unknown type, empty encoding */ isOwned;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
