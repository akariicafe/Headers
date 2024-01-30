@class NSDictionary, NSArray, MRPlayerPath, _MRPlaybackQueueRequestProtobuf, NSData, NSString;

@interface MRPlaybackQueueRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) double defaultArtworkWidth;
@property (class, readonly, nonatomic) double defaultArtwortHeight;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long location;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) long long length;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) BOOL hasIncludeMetadata;
@property (nonatomic) BOOL hasArtworkWidth;
@property (nonatomic) BOOL hasArtworkHeight;
@property (nonatomic) BOOL hasIncludeLyrics;
@property (nonatomic) BOOL hasIncludeSections;
@property (nonatomic) BOOL hasIncludeInfo;
@property (nonatomic) BOOL hasIncludeLanguageOptions;
@property (nonatomic) BOOL hasIncludeParticipants;
@property (copy, nonatomic) NSArray *contentItemIdentifiers;
@property (nonatomic, getter=isLegacyNowPlayingInfoRequest) BOOL legacyNowPlayingInfoRequest;
@property (nonatomic) BOOL hasLegacyNowPlayingInfoRequest;
@property (nonatomic) unsigned int cachingPolicy;
@property (nonatomic) BOOL hasCachingPolicy;
@property (readonly, nonatomic) _MRPlaybackQueueRequestProtobuf *protobuf;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) BOOL rangeContainsNowPlayingItem;
@property (readonly, nonatomic) BOOL shouldRequestItem;
@property (readonly, nonatomic) BOOL shouldRequestItemNotConsideringMetadata;
@property (readonly, nonatomic) BOOL containsNonDefaultAssets;
@property (readonly, nonatomic) MRPlaybackQueueRequest *skeleton;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) BOOL includeMetadata;
@property (nonatomic) BOOL includeLyrics;
@property (nonatomic) BOOL includeSections;
@property (nonatomic) BOOL includeInfo;
@property (nonatomic) BOOL includeLanguageOptions;
@property (nonatomic) BOOL includeParticipants;
@property (nonatomic) double artworkWidth;
@property (nonatomic) double artworkHeight;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) BOOL hasRange;
@property (readonly, nonatomic) BOOL includeArtwork;

+ (id)defaultPlaybackQueueRequest;
+ (id)requestWithCurrentState:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)defaultPlaybackQueueRequestWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)initWithData:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)match:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)exactMatch:(id)a0;
- (id)initFromTransactionName:(unsigned long long)a0;
- (id)initWithIdentifiers:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)performRequestForDestination:(id)a0 completion:(id /* block */)a1;
- (id)requestByRemovingArtwork;

@end
