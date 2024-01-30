@class NSString, SAUIImageResource, NSURL;

@interface SAVCSContentDetailPage : SAAceView

@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSString *imagesJsonContentPayload;
@property (nonatomic) BOOL isEvod;
@property (copy, nonatomic) NSString *loadingText;
@property (nonatomic) long long resultIndex;
@property (copy, nonatomic) NSString *seasonId;
@property (copy, nonatomic) NSString *showId;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL userDriven;
@property (copy, nonatomic) NSString *utsId;
@property (copy, nonatomic) NSURL *utsSearchUrl;

+ (id)contentDetailPage;
+ (id)contentDetailPageWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
