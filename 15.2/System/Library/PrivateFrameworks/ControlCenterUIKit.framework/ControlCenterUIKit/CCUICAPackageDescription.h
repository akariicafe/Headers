@class NSURL;

@interface CCUICAPackageDescription : NSObject

@property (readonly, copy, nonatomic) NSURL *packageURL;
@property (nonatomic) BOOL flipsForRightToLeftLayoutDirection;
@property (nonatomic) BOOL honorsUIViewAnimationState;

+ (id)descriptionForPackageNamed:(id)a0 inBundle:(id)a1;

- (id)initWithPackageName:(id)a0 inBundle:(id)a1;
- (void).cxx_destruct;

@end
