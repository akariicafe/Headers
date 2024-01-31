@class NSDictionary;

@interface ABSConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;
@property (retain, nonatomic) id defaultConstant;

+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;
+ (id)CNToABLabelConstantsMapping;

- (id)initWithMapping:(id)a0;
- (id)invertedMapping;
- (void).cxx_destruct;
- (id)mappedConstant:(id)a0;

@end
