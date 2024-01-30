@class HMLightProfile;

@interface HFNaturalLightingActionBuilder : HFActionBuilder

@property (retain, nonatomic) HMLightProfile *lightProfile;
@property (nonatomic) BOOL naturalLightEnabled;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (BOOL)updateWithActionBuilder:(id)a0;
- (id)copyForCreatingNewAction;
- (id)description;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (id)commitItem;
- (id)performValidation;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)createNewAction;

@end
