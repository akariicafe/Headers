@class NSString;

@interface BMStoreConfig : NSObject

@property (readonly, nonatomic) unsigned long long datastoreVersion;
@property (readonly, nonatomic) NSString *datastorePath;
@property (readonly, nonatomic) unsigned long long segmentSize;

+ (id)newPublicStreamDefaultConfiguration;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0;
+ (id)sharedStreamConfigurationWithVersion:(unsigned long long)a0;
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)a0;

- (id)init;
- (id)initWithStoreVersion:(unsigned long long)a0 storeBasePath:(id)a1 segmentSize:(unsigned long long)a2;
- (void)dealloc;
- (id)initWithStoreVersion:(unsigned long long)a0 datastorePath:(id)a1 maxAllowedMappedPages:(unsigned long long)a2 segmentSize:(unsigned long long)a3 segmentResizeFactor:(float)a4 segmentPaddingFactor:(float)a5;
- (unsigned long long)hash;
- (id)initWithStoreBasePath:(id)a0 segmentSize:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;

@end
