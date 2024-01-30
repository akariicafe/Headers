@class NSArray, NSData;

@interface ORCHSchemaORCHServerFallbackInitiated : SISchemaInstrumentationMessage {
    struct { unsigned char fallbackReason : 1; } _has;
}

@property (nonatomic) int fallbackReason;
@property (nonatomic) BOOL hasFallbackReason;
@property (copy, nonatomic) NSArray *missingAssets;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addMissingAsset:(int)a0;
- (void)clearMissingAsset;
- (unsigned long long)missingAssetCount;
- (int)missingAssetAtIndex:(unsigned long long)a0;

@end
