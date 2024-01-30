@class NSString;

@interface FCPersistedContentArchive : FCContentArchive {
    NSString *_archivePath;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)manifest;
- (id)initWithPersistedArchivePath:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
