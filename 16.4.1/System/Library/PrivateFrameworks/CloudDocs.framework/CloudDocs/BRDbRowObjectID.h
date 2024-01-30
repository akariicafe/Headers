@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)documentID;
- (BOOL)isFpfsItem;
- (id)initWithCoder:(id)a0;
- (unsigned char)type;
- (id)asString;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (id)description;
- (id)itemDBRowID;
- (unsigned long long)rawID;
- (id)folderID;

@end
