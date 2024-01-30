@class NSString;

@interface FCPersistedContentArchive : FCContentArchive {
    NSString *_archivePath;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)manifest;
- (id)description;
- (id)unarchiveIntoContentContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
