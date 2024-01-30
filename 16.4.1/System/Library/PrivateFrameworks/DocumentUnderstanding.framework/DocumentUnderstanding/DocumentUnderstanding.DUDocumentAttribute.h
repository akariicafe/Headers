@interface DocumentUnderstanding.DUDocumentAttribute : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ attributeNamespace;
    void /* unknown type, empty encoding */ attributeType;
    void /* unknown type, empty encoding */ attributeID;
    void /* unknown type, empty encoding */ displayName;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
