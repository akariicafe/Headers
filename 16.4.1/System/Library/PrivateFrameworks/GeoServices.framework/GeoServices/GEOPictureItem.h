@class NSString;
@protocol GEOMapItemPhoto;

@interface GEOPictureItem : NSObject <GEOPictureItem>

@property (readonly, nonatomic) id<GEOMapItemPhoto> photo;
@property (readonly, nonatomic) int pictureItemPhotoType;
@property (readonly, nonatomic) NSString *primaryText;
@property (readonly, nonatomic) NSString *secondaryText;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhoto:(id)a0 pictureItemPhotoType:(int)a1 primaryText:(id)a2 secondaryText:(id)a3;
- (id)initWithPictureItem:(id)a0;

@end
