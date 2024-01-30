@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;

+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;

- (void).cxx_destruct;
- (id)invertedMapping;
- (id)initWithMapping:(id)a0;
- (id)mappedConstant:(id)a0;

@end
