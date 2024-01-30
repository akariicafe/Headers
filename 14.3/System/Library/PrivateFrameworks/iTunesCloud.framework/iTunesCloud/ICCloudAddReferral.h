@class NSString;

@interface ICCloudAddReferral : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *playlistGlobalID;
@property (readonly, nonatomic) long long albumAdamID;

+ (id)referralWithPlaylistGlobalID:(id)a0;
+ (id)referralWithAlbumAdamID:(long long)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
