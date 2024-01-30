@class NSString, NSMutableArray;

@interface NSSUsageRespMsg : PBCodable <NSCopying> {
    struct { unsigned char audioCoursesUsage : 1; unsigned char audioPodcastsUsage : 1; unsigned char audiobooksUsage : 1; unsigned char cameralRollUsage : 1; unsigned char capacityInBytes : 1; unsigned char homeVideosUsage : 1; unsigned char movieRentalsUsage : 1; unsigned char moviesUsage : 1; unsigned char musicVideosUsage : 1; unsigned char photoLibraryUsage : 1; unsigned char photoStreamUsage : 1; unsigned char songsUsage : 1; unsigned char tvShowsUsage : 1; unsigned char videoCoursesUsage : 1; unsigned char videoPodcastsUsage : 1; } _has;
}

@property (nonatomic) unsigned long long usedStorageInBytes;
@property (nonatomic) unsigned long long availableStorageInBytes;
@property (nonatomic) float usageTimeInSeconds;
@property (nonatomic) float standbyTimeInSeconds;
@property (nonatomic) BOOL trusted;
@property (nonatomic) BOOL partiallyCharged;
@property (retain, nonatomic) NSMutableArray *appUsages;
@property (nonatomic) BOOL hasMoviesUsage;
@property (nonatomic) unsigned long long moviesUsage;
@property (nonatomic) BOOL hasMovieRentalsUsage;
@property (nonatomic) unsigned long long movieRentalsUsage;
@property (nonatomic) BOOL hasTvShowsUsage;
@property (nonatomic) unsigned long long tvShowsUsage;
@property (nonatomic) BOOL hasAudioCoursesUsage;
@property (nonatomic) unsigned long long audioCoursesUsage;
@property (nonatomic) BOOL hasVideoCoursesUsage;
@property (nonatomic) unsigned long long videoCoursesUsage;
@property (nonatomic) BOOL hasMusicVideosUsage;
@property (nonatomic) unsigned long long musicVideosUsage;
@property (nonatomic) BOOL hasAudioPodcastsUsage;
@property (nonatomic) unsigned long long audioPodcastsUsage;
@property (nonatomic) BOOL hasVideoPodcastsUsage;
@property (nonatomic) unsigned long long videoPodcastsUsage;
@property (nonatomic) BOOL hasSongsUsage;
@property (nonatomic) unsigned long long songsUsage;
@property (nonatomic) BOOL hasAudiobooksUsage;
@property (nonatomic) unsigned long long audiobooksUsage;
@property (nonatomic) BOOL hasHomeVideosUsage;
@property (nonatomic) unsigned long long homeVideosUsage;
@property (nonatomic) BOOL hasCameralRollUsage;
@property (nonatomic) unsigned long long cameralRollUsage;
@property (nonatomic) BOOL hasPhotoLibraryUsage;
@property (nonatomic) unsigned long long photoLibraryUsage;
@property (nonatomic) BOOL hasPhotoStreamUsage;
@property (nonatomic) unsigned long long photoStreamUsage;
@property (retain, nonatomic) NSMutableArray *bundleUsages;
@property (readonly, nonatomic) BOOL hasMusicBundleIdentifier;
@property (retain, nonatomic) NSString *musicBundleIdentifier;
@property (readonly, nonatomic) BOOL hasPhotosBundleIdentifier;
@property (retain, nonatomic) NSString *photosBundleIdentifier;
@property (readonly, nonatomic) BOOL hasPodcastsBundleIdentifier;
@property (retain, nonatomic) NSString *podcastsBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *appBundleUsages;
@property (retain, nonatomic) NSMutableArray *categories;
@property (nonatomic) BOOL hasCapacityInBytes;
@property (nonatomic) unsigned long long capacityInBytes;

+ (Class)categoriesType;
+ (Class)bundleUsageType;
+ (Class)appBundleUsageType;
+ (Class)appUsagesType;

- (unsigned long long)categoriesCount;
- (void)addCategories:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCategories;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addBundleUsage:(id)a0;
- (void)addAppBundleUsage:(id)a0;
- (void)addAppUsages:(id)a0;
- (id)appBundleUsageAtIndex:(unsigned long long)a0;
- (unsigned long long)appBundleUsagesCount;
- (id)appUsagesAtIndex:(unsigned long long)a0;
- (unsigned long long)appUsagesCount;
- (id)bundleUsageAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleUsagesCount;
- (void)clearAppBundleUsages;
- (void)clearAppUsages;
- (void)clearBundleUsages;

@end
