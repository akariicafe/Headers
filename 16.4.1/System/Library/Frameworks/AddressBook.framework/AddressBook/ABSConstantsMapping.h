@class NSDictionary;

@interface ABSConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;
@property (retain, nonatomic) id defaultConstant;

+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)CNToABLabelConstantsMapping;

- (id)initWithMapping:(id)a0;
- (id)mappedConstant:(id)a0;
- (id)invertedMapping;
- (void).cxx_destruct;

@end
