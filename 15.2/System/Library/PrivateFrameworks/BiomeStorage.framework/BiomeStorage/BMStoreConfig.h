@class NSString, BMPruningPolicy;

@interface BMStoreConfig : NSObject <NSCopying> {
    unsigned long long _streamType;
}

@property (readonly, nonatomic) unsigned long long datastoreVersion;
@property (nonatomic) long long storeLocationOption;
@property (copy, nonatomic) NSString *remoteStreamName;
@property (retain, nonatomic) BMPruningPolicy *pruningPolicy;
@property (readonly, nonatomic) NSString *datastorePath;
@property (readonly, nonatomic) unsigned long long segmentSize;
@property (readonly, nonatomic) unsigned long long protectionClass;

+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)a0;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0;
+ (id)newPublicStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0 protectionClass:(unsigned long long)a1;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0 protectionClass:(unsigned long long)a1 segmentSize:(unsigned long long)a2;
+ (id)newRestrictedStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)a0 protectionClass:(unsigned long long)a1;
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)a0 protectionClass:(unsigned long long)a1;
+ (unsigned long long)streamTypeFromStorePath:(id)a0;
+ (id)newPublicStreamDefaultConfiguration;
+ (id)newRestrictedStreamDefaultConfiguration;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)a0;
+ (id)newPrivateStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0 segmentSize:(unsigned long long)a1;

- (unsigned long long)streamType;
- (id)initWithStoreVersion:(unsigned long long)a0 storeBasePath:(id)a1 segmentSize:(unsigned long long)a2 protectionClass:(unsigned long long)a3;
- (id)copyStoreConfigWithOption:(long long)a0 remoteStreamName:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithStoreVersion:(unsigned long long)a0 storeBasePath:(id)a1 segmentSize:(unsigned long long)a2 protectionClass:(unsigned long long)a3 storeLocationOption:(long long)a4 remoteStreamName:(id)a5 pruningPolicy:(id)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreVersion:(unsigned long long)a0 datastorePath:(id)a1 maxAllowedMappedPages:(unsigned long long)a2 segmentSize:(unsigned long long)a3 segmentResizeFactor:(float)a4 segmentPaddingFactor:(float)a5;
- (unsigned long long)hash;
- (id)initWithStoreBasePath:(id)a0 segmentSize:(unsigned long long)a1;
- (id)initWithStoreBasePath:(id)a0 segmentSize:(unsigned long long)a1 protectionClass:(unsigned long long)a2;

@end
