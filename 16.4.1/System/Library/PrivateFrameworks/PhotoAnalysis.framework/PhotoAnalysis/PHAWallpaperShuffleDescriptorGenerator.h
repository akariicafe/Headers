@class PHPhotoLibrary, PFPseudoRandomNumberGenerator, NSObject;
@protocol OS_os_log;

@interface PHAWallpaperShuffleDescriptorGenerator : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    PFPseudoRandomNumberGenerator *_randomNumberGenerator;
    long long _shuffleMinimumSuggestionRequired;
}

+ (id)displayNameLocalizationKeyForTopSubtype:(unsigned short)a0;
+ (unsigned short)wallpaperTopSubtypeFromShuffleSubtype:(unsigned short)a0;

- (void).cxx_destruct;
- (id)allVIPShufflePosterDescriptorFromEligiblePersonLocalIdentifiers:(id)a0;
- (id)baseSuggestionFetchOptionsWithSubtype:(unsigned short)a0 personLocalIdentifiers:(id)a1 suggestionUUIDsToAvoid:(id)a2;
- (id)descriptorForSuggestion:(id)a0;
- (id)fetchSuggestionWithSubtype:(unsigned short)a0 personLocalIdentifiers:(id)a1;
- (id)initWithPHPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)peopleShufflePosterDescriptors;
- (id)shuffleDescriptorEligiblePersonLocalIdentifiers;
- (id)shuffleDescriptorsForDonation;
- (id)shufflePosterDescriptorForShuffleSubtype:(unsigned short)a0 personLocalIdentifiers:(id)a1 suggestionUUIDsToAvoid:(id)a2 requireMinimumShuffleCount:(BOOL)a3;
- (id)shuffleVIPPersonLocalIdentifiers;
- (id)suggestionPersonLocalIdentifiersFromSuggestions:(id)a0;

@end
