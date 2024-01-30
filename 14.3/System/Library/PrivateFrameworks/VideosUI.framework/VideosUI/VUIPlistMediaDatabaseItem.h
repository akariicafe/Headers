@class NSDate, NSString, NSURL, VUIPlistMediaDatabaseSeason, NSDictionary, _TVContentRating, VUIMediaItemCredits, NSNumber;

@interface VUIPlistMediaDatabaseItem : VUIPlistMediaDatabaseEntity <NSCopying> {
    NSNumber *_local;
}

@property (weak, nonatomic) VUIPlistMediaDatabaseSeason *season;
@property (readonly, copy, nonatomic, getter=isPlayable) NSNumber *playable;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSURL *previewFrameURL;
@property (copy, nonatomic) _TVContentRating *contentRating;
@property (copy, nonatomic) NSNumber *colorCapability;
@property (copy, nonatomic) NSNumber *HLSColorCapability;
@property (copy, nonatomic) NSNumber *episodeNumber;
@property (copy, nonatomic) NSString *studio;
@property (copy, nonatomic) VUIMediaItemCredits *credits;
@property (copy, nonatomic) NSURL *playbackURL;
@property (copy, nonatomic) NSURL *filePathURL;
@property (copy, nonatomic) NSDictionary *offlineFPSKeys;
@property (copy, nonatomic) NSString *downloadState;

- (id)isLocal;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;

@end
