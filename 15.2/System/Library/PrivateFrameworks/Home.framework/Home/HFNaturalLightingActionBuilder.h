@class HMLightProfile;

@interface HFNaturalLightingActionBuilder : HFActionBuilder

@property (retain, nonatomic) HMLightProfile *lightProfile;
@property (nonatomic) BOOL naturalLightEnabled;

+ (Class)homeKitRepresentationClass;

- (id)description;
- (void).cxx_destruct;
- (id)performValidation;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)createNewAction;
- (BOOL)updateWithActionBuilder:(id)a0;
- (id)commitItem;
- (BOOL)canUpdateWithActionBuilder:(id)a0;
- (id)copyForCreatingNewAction;
- (BOOL)hasSameTargetAsAction:(id)a0;

@end
