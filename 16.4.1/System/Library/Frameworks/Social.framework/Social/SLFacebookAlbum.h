@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSString *coverPhotoIdentifier;
@property long long count;
@property BOOL canUpload;
@property BOOL isDefaultAlbum;

+ (id)albumWithDataDictionary:(id)a0;
+ (id)albumsWithAlbumDataDictionaries:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
