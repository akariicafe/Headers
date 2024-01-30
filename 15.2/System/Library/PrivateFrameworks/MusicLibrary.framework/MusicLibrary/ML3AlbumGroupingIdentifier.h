@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) long long albumArtistPersistentID;
@property (readonly, nonatomic) NSData *groupingKey;
@property (readonly, nonatomic) NSString *feedURL;
@property (readonly, nonatomic) long long seasonNumber;
@property (readonly, nonatomic) BOOL compilation;
@property (readonly, nonatomic) NSData *keyValue;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAlbumArtistPersistentID:(long long)a0 groupingKey:(id)a1 feedURL:(id)a2 seasonNumber:(long long)a3 compilation:(BOOL)a4;

@end
