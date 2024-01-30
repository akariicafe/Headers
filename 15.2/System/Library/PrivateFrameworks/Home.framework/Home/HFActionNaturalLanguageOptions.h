@class HMHome, NSSet;

@interface HFActionNaturalLanguageOptions : HFSubstringNaturalLanguageOptions

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *objectsInContext;
@property (nonatomic) BOOL useMediaContainersNotInContext;
@property (nonatomic) BOOL ignoreOptionalCharacteristics;
@property (nonatomic) unsigned long long accessoryCountType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0 formattingContext:(long long)a1;

@end
