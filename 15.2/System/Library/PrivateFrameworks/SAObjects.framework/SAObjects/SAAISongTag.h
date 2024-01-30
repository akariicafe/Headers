@class NSString, NSURL, SAUIImageResource;

@interface SAAISongTag : SADomainObject

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *albumAdamId;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *artistAdamId;
@property (copy, nonatomic) NSString *contentRating;
@property (copy, nonatomic) NSURL *iTunesUri;
@property (retain, nonatomic) SAUIImageResource *previewImage;
@property (copy, nonatomic) NSURL *radioStationUri;
@property (copy, nonatomic) NSString *title;

+ (id)songTag;
+ (id)songTagWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
