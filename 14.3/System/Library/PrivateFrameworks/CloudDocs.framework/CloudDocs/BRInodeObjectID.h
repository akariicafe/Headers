@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isFolderOrAliasID;
- (unsigned long long)rawID;
- (id)initWithCoder:(id)a0;
- (id)folderID;
- (id)description;
- (id)asString;
- (id)initWithFileID:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
