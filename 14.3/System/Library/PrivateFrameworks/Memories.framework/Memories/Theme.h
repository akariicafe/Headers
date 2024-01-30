@class NSString, UIImage;

@interface Theme : NSObject

@property (readonly, nonatomic) NSString *themeID;
@property (readonly, nonatomic) NSString *trailerID;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) NSString *displayName;

+ (BOOL)themeIDIsTrailer:(id)a0;
+ (id)themeWithID:(id)a0;
+ (id)trailerIDFromThemeID:(id)a0;
+ (id)themeIDs;
+ (id)themeIDFromTrailerID:(id)a0;

- (void).cxx_destruct;
- (id)posterImage;
- (id)musicName;
- (id)micaFileBaseName;
- (id)micaFileNameForTitleNamed:(id)a0;
- (id)initWithThemeID:(id)a0;
- (id)micaFileNameForTransitionName:(id)a0 transitionDirection:(int)a1;
- (id)micaFileNameForCutawayName:(id)a0 cutawayDirection:(int)a1;
- (id)displayNameForTransitionName:(id)a0;

@end
