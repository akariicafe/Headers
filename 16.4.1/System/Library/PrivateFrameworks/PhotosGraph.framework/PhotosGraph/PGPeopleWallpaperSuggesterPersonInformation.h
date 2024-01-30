@class NSString, NSSet;

@interface PGPeopleWallpaperSuggesterPersonInformation : NSObject

@property (readonly) NSString *personLocalIdentifier;
@property (readonly) long long importance;
@property (readonly) NSSet *dupedPersonLocalIdentifiers;

- (void).cxx_destruct;
- (id)initWithPersonLocalIdentifier:(id)a0 importance:(long long)a1 unverifiedMergeCandidateLocalIdentifiers:(id)a2;
- (void)mergeImportance:(long long)a0;

@end
