@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer>

@property (readonly, nonatomic) NSArray *pictureItems;
@property (readonly, nonatomic) BOOL allowFullScreenPhoto;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPictureItems:(id)a0 allowFullScreenPhoto:(BOOL)a1;
- (id)initWithPictureItemContainer:(id)a0;

@end
