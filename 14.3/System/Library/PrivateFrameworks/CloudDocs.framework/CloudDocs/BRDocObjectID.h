@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)rawID;
- (id)initWithDocID:(unsigned int)a0;
- (id)initWithDocIDNumber:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)documentID;
- (id)description;
- (id)asString;
- (BOOL)isDocumentID;
- (void)encodeWithCoder:(id)a0;

@end
