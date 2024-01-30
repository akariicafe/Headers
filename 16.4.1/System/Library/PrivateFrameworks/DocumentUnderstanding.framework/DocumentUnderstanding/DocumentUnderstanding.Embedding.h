@interface DocumentUnderstanding.Embedding : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ embedder;
    void /* unknown type, empty encoding */ dimensions;
    void /* unknown type, empty encoding */ embeddingValues;
}

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
