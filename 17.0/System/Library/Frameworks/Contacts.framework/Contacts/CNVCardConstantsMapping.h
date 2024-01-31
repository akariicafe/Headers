@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;

+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;

- (id)initWithMapping:(id)a0;
- (id)invertedMapping;
- (void).cxx_destruct;
- (id)mappedConstant:(id)a0;

@end
