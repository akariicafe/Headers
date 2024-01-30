@class NSArray;

@interface PGPetWallpaperSuggestion : PGSingleAssetSuggestion {
    NSArray *_suggestedPersonLocalIdentifiers;
}

- (void).cxx_destruct;
- (id)suggestedPersonLocalIdentifiers;
- (id)initWithPetLocalIdentifier:(id)a0 subtype:(unsigned short)a1 asset:(id)a2;

@end
