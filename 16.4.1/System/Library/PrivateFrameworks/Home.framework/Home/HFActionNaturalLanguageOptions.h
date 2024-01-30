@class HMHome, NSSet;

@interface HFActionNaturalLanguageOptions : HFSubstringNaturalLanguageOptions

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *objectsInContext;
@property (nonatomic) BOOL useMediaContainersNotInContext;
@property (nonatomic) BOOL ignoreOptionalCharacteristics;
@property (nonatomic) unsigned long long accessoryCountType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0 formattingContext:(long long)a1;

@end
