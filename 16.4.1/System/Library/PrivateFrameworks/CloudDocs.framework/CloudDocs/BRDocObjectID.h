@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)documentID;
- (id)initWithDocIDNumber:(id)a0;
- (BOOL)isFpfsItem;
- (id)initWithDocID:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isDocumentID;
- (unsigned char)type;
- (id)asString;
- (id)description;
- (unsigned long long)rawID;

@end
