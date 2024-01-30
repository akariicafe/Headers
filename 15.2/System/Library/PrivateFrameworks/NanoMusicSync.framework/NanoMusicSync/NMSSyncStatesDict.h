@class NSMutableDictionary;

@interface NMSSyncStatesDict : NSObject <NSCopying> {
    NSMutableDictionary *_syncStatesDict;
    NSMutableDictionary *_waitingSubstatesDict;
}

+ (id)assetTypeForMediaType:(unsigned long long)a0;
+ (unsigned long long)mediaTypeForAssetType:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setWaitingSubstate:(unsigned long long)a0 forMediaType:(unsigned long long)a1;
- (void)setSyncState:(unsigned long long)a0 forMediaType:(unsigned long long)a1;
- (void)setSyncStateForAllMediaTypes:(unsigned long long)a0;
- (void)setWaitingSubstateForAllMediaTypes:(unsigned long long)a0;
- (unsigned long long)syncStateForMediaType:(unsigned long long)a0;
- (unsigned long long)waitingSubstateForMediaType:(unsigned long long)a0;
- (id)syncStateDictionaryRepresentation;
- (id)waitingSubstateDictionaryRepresentation;

@end
