@class NSString;
@protocol TSPCryptoInfo;

@interface TSPDataStorageWriteResult : NSObject

@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) id<TSPCryptoInfo> encryptionInfo;
@property (readonly, nonatomic) long long packageStorageType;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) BOOL isMissingData;
@property (readonly, nonatomic) unsigned long long changeCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 encryptionInfo:(id)a1 packageStorageType:(long long)a2 encodedLength:(unsigned long long)a3 isMissingData:(BOOL)a4 changeCount:(unsigned long long)a5;

@end
