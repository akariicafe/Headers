@class OADDrawableCategoryDefaults;

@interface OADDrawableDefaults : NSObject

@property (retain, nonatomic) OADDrawableCategoryDefaults *shapeDefaults;
@property (retain, nonatomic) OADDrawableCategoryDefaults *lineDefaults;
@property (retain, nonatomic) OADDrawableCategoryDefaults *textDefaults;

- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)addShapeDefaults;
- (id)addLineDefaults;
- (id)addTextDefaults;
- (void)addDefaults;

@end
