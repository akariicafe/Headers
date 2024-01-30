@class NSArray;

@interface GEOTileDBSubscriptionMetadata : NSObject {
    NSArray *_dataStates;
}

@property (readonly, nonatomic) unsigned long long associatedDataCount;
@property (readonly, nonatomic) unsigned long long associatedDataSize;

- (void).cxx_destruct;
- (id)initWithDataCount:(unsigned long long)a0 dataSize:(unsigned long long)a1 dataStates:(id)a2;
- (BOOL)isFullyLoadedForDataType:(unsigned int)a0 dataSubtype:(unsigned int)a1 version:(unsigned long long)a2;

@end
