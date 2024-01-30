@interface NTPBVideoGroupsConfig : PBCodable <NSCopying> {
    struct { unsigned char moreFromPublisherBarTime : 1; unsigned char moreVideosGroupMaxNumberOfVideos : 1; unsigned char moreVideosGroupMinNumberOfVideos : 1; unsigned char nowPlayingBarTime : 1; unsigned char upNextBarTime : 1; unsigned char moreVideosGroupFilterOption : 1; unsigned char moreVideosGroupSortOption : 1; unsigned char moreFromPublisherBarEnabled : 1; unsigned char playsMutedByDefault : 1; } _has;
}

@property (nonatomic) BOOL hasPlaysMutedByDefault;
@property (nonatomic) BOOL playsMutedByDefault;
@property (nonatomic) BOOL hasNowPlayingBarTime;
@property (nonatomic) long long nowPlayingBarTime;
@property (nonatomic) BOOL hasUpNextBarTime;
@property (nonatomic) long long upNextBarTime;
@property (nonatomic) BOOL hasMoreFromPublisherBarTime;
@property (nonatomic) long long moreFromPublisherBarTime;
@property (nonatomic) BOOL hasMoreFromPublisherBarEnabled;
@property (nonatomic) BOOL moreFromPublisherBarEnabled;
@property (nonatomic) BOOL hasMoreVideosGroupSortOption;
@property (nonatomic) int moreVideosGroupSortOption;
@property (nonatomic) BOOL hasMoreVideosGroupFilterOption;
@property (nonatomic) int moreVideosGroupFilterOption;
@property (nonatomic) BOOL hasMoreVideosGroupMinNumberOfVideos;
@property (nonatomic) long long moreVideosGroupMinNumberOfVideos;
@property (nonatomic) BOOL hasMoreVideosGroupMaxNumberOfVideos;
@property (nonatomic) long long moreVideosGroupMaxNumberOfVideos;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
