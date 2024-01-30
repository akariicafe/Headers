@class NSArray, NSString, SFUCryptoKey;

@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo>

@property (retain, nonatomic) NSArray *blockInfos;
@property (nonatomic) unsigned long long decodedLength;
@property (readonly, nonatomic) SFUCryptoKey *cryptoKey;
@property (readonly, nonatomic) unsigned long long preferredBlockSize;
@property (readonly, nonatomic) BOOL hasDecodedLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
