@class NSString, NSMutableSet;

@interface SGBloomFilterChunkInMemorySparse : NSObject <SGBloomFilterChunk> {
    NSMutableSet *_hashes;
}

@property (readonly, nonatomic) unsigned int count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
