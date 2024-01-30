@interface DocumentUnderstanding.DUDocumentUpdate : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ documentID;
    void /* unknown type, empty encoding */ documentBody;
    void /* unknown type, empty encoding */ associatedFileURL;
    void /* unknown type, empty encoding */ documentType;
    void /* unknown type, empty encoding */ updateTimestamp;
    void /* unknown type, empty encoding */ documentAttributes;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
