@class NSString, MIPArtist, NSData;

@interface MIPMovie : PBCodable <NSCopying> {
    struct { unsigned char rentalDuration : 1; unsigned char rentalPlaybackDuration : 1; unsigned char rentalPlaybackStartedDateTime : 1; unsigned char rentalStartedDateTime : 1; unsigned char audioLanguage : 1; unsigned char audioTrackId : 1; unsigned char audioTrackIndex : 1; unsigned char subtitleLanguage : 1; unsigned char subtitleTrackIndex : 1; unsigned char videoQuality : 1; unsigned char hasAlternateAudio : 1; unsigned char hasChapterData : 1; unsigned char hasSubtitles : 1; unsigned char rental : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic) BOOL hasVideoQuality;
@property (nonatomic) int videoQuality;
@property (nonatomic) BOOL hasRental;
@property (nonatomic) BOOL rental;
@property (nonatomic) BOOL hasHasChapterData;
@property (nonatomic) BOOL hasChapterData;
@property (readonly, nonatomic) BOOL hasExtendedContentName;
@property (retain, nonatomic) NSString *extendedContentName;
@property (readonly, nonatomic) BOOL hasMovieInfo;
@property (retain, nonatomic) NSString *movieInfo;
@property (nonatomic) BOOL hasHasAlternateAudio;
@property (nonatomic) BOOL hasAlternateAudio;
@property (nonatomic) BOOL hasHasSubtitles;
@property (nonatomic) BOOL hasSubtitles;
@property (nonatomic) BOOL hasAudioLanguage;
@property (nonatomic) int audioLanguage;
@property (nonatomic) BOOL hasAudioTrackIndex;
@property (nonatomic) int audioTrackIndex;
@property (nonatomic) BOOL hasAudioTrackId;
@property (nonatomic) int audioTrackId;
@property (nonatomic) BOOL hasSubtitleLanguage;
@property (nonatomic) int subtitleLanguage;
@property (nonatomic) BOOL hasSubtitleTrackIndex;
@property (nonatomic) int subtitleTrackIndex;
@property (nonatomic) BOOL hasRentalDuration;
@property (nonatomic) long long rentalDuration;
@property (nonatomic) BOOL hasRentalPlaybackDuration;
@property (nonatomic) long long rentalPlaybackDuration;
@property (nonatomic) BOOL hasRentalPlaybackStartedDateTime;
@property (nonatomic) long long rentalPlaybackStartedDateTime;
@property (nonatomic) BOOL hasRentalStartedDateTime;
@property (nonatomic) long long rentalStartedDateTime;
@property (readonly, nonatomic) BOOL hasFlattenedChapterData;
@property (retain, nonatomic) NSData *flattenedChapterData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
