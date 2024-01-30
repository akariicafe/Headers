@class NSData;

@interface DEAsset : NSObject

@property (retain, nonatomic) NSData *version;
@property (retain, nonatomic) NSData *encryptedVersion;
@property unsigned long long downloadType;
@property (nonatomic) unsigned long long encryptedSize;

+ (id)assetFromPb:(const void *)a0;
+ (void)assetToPb:(id)a0 asset:(id)a1 assetPb:(void *)a2;
+ (unsigned long long)downloadTypeFromPb:(int)a0;
+ (int)downloadTypeToPb:(unsigned long long)a0;

- (void).cxx_destruct;

@end
