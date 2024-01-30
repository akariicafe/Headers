@class NSString, NSNumber;

@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL entireMusicLibrary;
@property (readonly, copy, nonatomic) NSString *playlistName;
@property (readonly, nonatomic) NSNumber *persistentIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEntireMusicLibrary;
- (id)initWithPlaylistName:(id)a0 persistentIdentifier:(id)a1;

@end
