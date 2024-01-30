@class NSString, NSMutableDictionary, ICDataCryptor, NSURL, NSMutableArray;

@interface ICDataPersister : NSObject <ICDataPersister, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICDataCryptor *dataCryptor;
@property (readonly, nonatomic) NSURL *cacheDirectoryURL;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSMutableArray *allURLs;
@property (readonly, nonatomic) NSMutableDictionary *identifierToDataDictionary;
@property (nonatomic) unsigned long long accumulatedDataSize;

+ (void)deletePasteboardDataFiles;
+ (id)rootCacheDirectoryPathForPasteboard:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)deleteDataFiles;
- (id)initWithObjectIdentifier:(id)a0 forPasteboard:(BOOL)a1;
- (BOOL)verifyDataFiles;
- (void)createDataCryptorIfNecessary;
- (id)loadDataForIdentifier:(id)a0;
- (BOOL)makeSureCacheDirectoryExists;
- (BOOL)saveData:(id)a0 identifier:(id)a1;

@end
