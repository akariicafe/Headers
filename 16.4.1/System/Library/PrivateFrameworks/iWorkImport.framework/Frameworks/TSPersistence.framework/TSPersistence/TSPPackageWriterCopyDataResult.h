@class NSString;
@protocol TSPCryptoInfo;

@interface TSPPackageWriterCopyDataResult : NSObject

@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) id<TSPCryptoInfo> encryptionInfo;
@property (readonly, nonatomic) unsigned long long encodedLength;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 encryptionInfo:(id)a1 encodedLength:(unsigned long long)a2;

@end
