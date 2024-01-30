@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;

- (id)documentID;
- (void)encodeWithCoder:(id)a0;
- (id)asString;
- (id)description;
- (id)initWithDocIDNumber:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDocID:(unsigned int)a0;
- (BOOL)isDocumentID;
- (unsigned long long)rawID;

@end
