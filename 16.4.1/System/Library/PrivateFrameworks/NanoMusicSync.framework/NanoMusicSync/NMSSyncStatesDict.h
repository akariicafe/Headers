@class NSMutableDictionary;

@interface NMSSyncStatesDict : NSObject <NSCopying> {
    NSMutableDictionary *_syncStatesDict;
    NSMutableDictionary *_waitingSubstatesDict;
}

+ (id)assetTypeForMediaType:(unsigned long long)a0;
+ (unsigned long long)mediaTypeForAssetType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setSyncState:(unsigned long long)a0 forMediaType:(unsigned long long)a1;
- (void)setSyncStateForAllMediaTypes:(unsigned long long)a0;
- (void)setWaitingSubstate:(unsigned long long)a0 forMediaType:(unsigned long long)a1;
- (void)setWaitingSubstateForAllMediaTypes:(unsigned long long)a0;
- (id)syncStateDictionaryRepresentation;
- (unsigned long long)syncStateForMediaType:(unsigned long long)a0;
- (id)waitingSubstateDictionaryRepresentation;
- (unsigned long long)waitingSubstateForMediaType:(unsigned long long)a0;

@end
