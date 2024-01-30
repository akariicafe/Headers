@class NSDictionary;

@interface CNiOSABConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;
@property (retain, nonatomic) id defaultConstant;

+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)ABToCNContactShortNameFormatConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)CNToABPersonShortNameFormatConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;

- (id)mappedConstant:(id)a0;
- (id)invertedMapping;
- (void).cxx_destruct;
- (id)initWithMapping:(id)a0;

@end
