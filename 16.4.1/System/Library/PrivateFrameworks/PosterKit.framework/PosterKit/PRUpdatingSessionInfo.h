@class NSString, NSDictionary, PRSPosterUpdateSessionInfo;

@interface PRUpdatingSessionInfo : NSObject {
    PRSPosterUpdateSessionInfo *_info;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (id)shortcutsWallpaperConfiguration;
- (void).cxx_destruct;

@end
