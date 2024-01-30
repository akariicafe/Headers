@class NSDictionary;

@interface CNiOSABConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;
@property (retain, nonatomic) id defaultConstant;

+ (id)ABToCNContactShortNameFormatConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)CNToABPersonShortNameFormatConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;

- (void).cxx_destruct;
- (id)invertedMapping;
- (id)initWithMapping:(id)a0;
- (id)mappedConstant:(id)a0;

@end
