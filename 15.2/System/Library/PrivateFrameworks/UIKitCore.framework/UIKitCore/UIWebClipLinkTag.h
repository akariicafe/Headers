@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject

@property (copy, nonatomic) NSString *href;
@property (readonly, nonatomic) NSURL *hrefURL;
@property (copy, nonatomic) NSString *rel;
@property (copy, nonatomic) NSString *sizes;
@property (nonatomic) BOOL mediaMatchesPortraitOrientation;
@property (nonatomic) BOOL mediaMatchesLandscapeOrientation;

- (void).cxx_destruct;

@end
