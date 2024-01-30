@class NSMutableOrderedSet;

@interface VCMediaNegotiatorStreamGroupConfiguration : NSObject <NSCopying> {
    unsigned int _cipherSuite;
}

@property (nonatomic) unsigned int groupID;
@property (nonatomic) unsigned int syncGroupID;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int mediaSubtype;
@property (readonly, nonatomic) NSMutableOrderedSet *streamConfigs;
@property (readonly, nonatomic) NSMutableOrderedSet *codecConfigs;

+ (id)streamGroupConfigWithGroupID:(unsigned int)a0 mediaType:(unsigned int)a1 subtype:(unsigned int)a2 syncGroupID:(unsigned int)a3 cipherSuite:(unsigned int)a4;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)removeStreamConfigs:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithGroupID:(unsigned int)a0 mediaType:(unsigned int)a1 subtype:(unsigned int)a2 syncGroupID:(unsigned int)a3;
- (id)initWithGroupID:(unsigned int)a0 mediaType:(unsigned int)a1 subtype:(unsigned int)a2 syncGroupID:(unsigned int)a3 cipherSuite:(unsigned int)a4;
- (void)addStreamConfig:(id)a0;
- (void)addCodecConfig:(id)a0;
- (unsigned long long)indexOfCodecConfig:(id)a0;

@end
