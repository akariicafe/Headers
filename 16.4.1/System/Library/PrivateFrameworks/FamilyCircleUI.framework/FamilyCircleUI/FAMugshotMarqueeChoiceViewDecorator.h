@class FAProfilePictureStore, RUIElement;

@interface FAMugshotMarqueeChoiceViewDecorator : NSObject

@property (retain, nonatomic) RUIElement *element;
@property (retain, nonatomic) FAProfilePictureStore *pictureStore;

+ (BOOL)shouldProcessElement:(id)a0;
+ (BOOL)shouldProcessObjectModel:(id)a0;

- (void).cxx_destruct;
- (id)imageWithAltDSIDs:(id)a0 familyCircle:(id)a1;
- (id)altDSIDsFromString:(id)a0;
- (void)applyImage;
- (id)initWithElement:(id)a0 pictureStore:(id)a1;
- (id)initWithObjectModel:(id)a0 pictureStore:(id)a1;

@end
