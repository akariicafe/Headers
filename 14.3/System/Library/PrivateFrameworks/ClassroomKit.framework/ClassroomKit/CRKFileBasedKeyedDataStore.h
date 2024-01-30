@class NSURL, NSFileManager, NSString;

@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol>

@property (retain, nonatomic) NSURL *directoryURL;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (id)initWithDirectoryURL:(id)a0;
- (id)URLForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)removeDataForKey:(id)a0 error:(id *)a1;
- (BOOL)isKeyValid:(id)a0;
- (BOOL)removeAllDataWithError:(id *)a0;

@end
