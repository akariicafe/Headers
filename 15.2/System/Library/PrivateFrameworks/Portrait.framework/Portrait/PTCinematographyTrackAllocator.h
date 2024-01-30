@interface PTCinematographyTrackAllocator : NSObject

@property (nonatomic) long long trackIdentifier;

- (id)_initWithCinematographyDictionary:(id)a0;
- (id)_asCinematographyDictionary;
- (id)initWithTrackIdentifier:(long long)a0;
- (long long)nextTrackIdentifier;

@end
