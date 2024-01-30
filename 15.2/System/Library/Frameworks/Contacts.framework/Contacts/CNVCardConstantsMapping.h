@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;

+ (id)vCardToCNSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)CNToVCardInstantMessageConstantsMapping;

- (id)mappedConstant:(id)a0;
- (id)invertedMapping;
- (void).cxx_destruct;
- (id)initWithMapping:(id)a0;

@end
