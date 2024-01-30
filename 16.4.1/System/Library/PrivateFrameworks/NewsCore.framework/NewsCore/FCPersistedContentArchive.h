@class NSString;

@interface FCPersistedContentArchive : FCContentArchive {
    NSString *_archivePath;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)manifest;
- (id)initWithCoder:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
