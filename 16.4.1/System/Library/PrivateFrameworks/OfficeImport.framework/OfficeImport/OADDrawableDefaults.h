@class OADDrawableCategoryDefaults;

@interface OADDrawableDefaults : NSObject

@property (retain, nonatomic) OADDrawableCategoryDefaults *shapeDefaults;
@property (retain, nonatomic) OADDrawableCategoryDefaults *lineDefaults;
@property (retain, nonatomic) OADDrawableCategoryDefaults *textDefaults;

- (BOOL)isEmpty;
- (id)description;
- (void).cxx_destruct;
- (id)addLineDefaults;
- (id)addTextDefaults;
- (void)addDefaults;
- (id)addShapeDefaults;

@end
