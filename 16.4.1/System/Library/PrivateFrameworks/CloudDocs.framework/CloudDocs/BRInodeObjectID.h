@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isFpfsItem;
- (id)initWithCoder:(id)a0;
- (unsigned char)type;
- (BOOL)isFolderOrAliasID;
- (id)asString;
- (id)initWithFileID:(unsigned long long)a0;
- (id)description;
- (unsigned long long)rawID;
- (id)folderID;

@end
