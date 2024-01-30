@class NSError, CKRecord;

@interface BRCLocalVersion : BRCVersion

@property (retain, nonatomic) CKRecord *uploadedAssets;
@property (retain, nonatomic) NSError *uploadError;

+ (BOOL)supportsSecureCoding;

- (id)initWithVersion:(id)a0;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (id)sizeObj;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (id)initForPackage:(BOOL)a0;
- (void)_clearSignatures:(unsigned long long)a0 isPackage:(BOOL)a1;
- (id)initWithLocalVersion:(id)a0;
- (void)updateLocationAndMetaFromFSAtPath:(id)a0 updateFilename:(BOOL)a1 filenameOverride:(id)a2;
- (id)isPackageObj;
- (unsigned long long)diffAgainstLocalVersion:(id)a0;
- (id)initWithServerVersion:(id)a0;
- (BOOL)shouldRecreateUploadJobGivenDiffs:(unsigned long long)a0;
- (BOOL)isMissingUploadsWithDiffs:(unsigned long long)a0;
- (void)updateFromFSAtPath:(id)a0 filenameOverride:(id)a1;

@end
