@class NSNumber, NSString;

@interface CKOrganicImageLayoutRecipe : NSObject

@property (nonatomic) double rotation;
@property (nonatomic) double offset;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) double overlap;
@property (nonatomic) BOOL wantsShadow;
@property (retain, nonatomic) NSNumber *relativeGroupCenter;
@property (retain, nonatomic) NSNumber *groupMaxX;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic) BOOL isLastItem;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRotation:(double)a0 offset:(double)a1 targetSize:(struct CGSize { double x0; double x1; })a2 overlap:(double)a3 wantsShadow:(BOOL)a4 groupIdentifier:(id)a5;

@end
