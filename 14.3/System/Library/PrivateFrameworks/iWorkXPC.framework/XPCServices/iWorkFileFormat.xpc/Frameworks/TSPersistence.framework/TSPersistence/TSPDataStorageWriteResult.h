@class NSString;
@protocol TSPCryptoInfo;

@interface TSPDataStorageWriteResult : NSObject

@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) id<TSPCryptoInfo> encryptionInfo;
@property (readonly, nonatomic) BOOL didCopyDataToPackage;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) BOOL isMissingData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 encryptionInfo:(id)a1 didCopyDataToPackage:(BOOL)a2 encodedLength:(unsigned long long)a3 isMissingData:(BOOL)a4;

@end
