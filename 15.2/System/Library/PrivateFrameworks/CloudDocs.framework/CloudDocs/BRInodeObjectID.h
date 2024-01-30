@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)asString;
- (id)description;
- (id)folderID;
- (id)initWithCoder:(id)a0;
- (BOOL)isFolderOrAliasID;
- (id)initWithFileID:(unsigned long long)a0;
- (unsigned long long)rawID;

@end
