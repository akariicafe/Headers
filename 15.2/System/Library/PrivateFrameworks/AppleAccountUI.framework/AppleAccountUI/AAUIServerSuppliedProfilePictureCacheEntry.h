@class UIImage, NSString, NSDate;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {
    NSDate *_expirationDate;
}

@property (retain, nonatomic) UIImage *picture;
@property (copy, nonatomic) NSString *serverCacheTag;
@property (nonatomic) BOOL updating;
@property (readonly, nonatomic) BOOL expired;

- (id)description;
- (void)expire;
- (void).cxx_destruct;

@end
