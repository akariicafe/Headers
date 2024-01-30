@class NSArray, SXComponentTextRules, SXComponentLayoutRules;

@interface SXComponentClassification : NSObject

@property (readonly, nonatomic) NSArray *defaultStyleIdentifiers;
@property (readonly, nonatomic) SXComponentLayoutRules *layoutRules;
@property (readonly, nonatomic) SXComponentTextRules *textRules;
@property (readonly, nonatomic) NSArray *defaultTextStyleIdentifiers;
@property (readonly, nonatomic) NSArray *defaultComponentStyleIdentifiers;
@property (readonly, nonatomic) unsigned long long contentRelevance;

+ (id)typeString;
+ (void)initialize;
+ (id)roleString;
+ (int)role;
+ (BOOL)shouldRegister;
+ (id)classificationForComponentWithRole:(int)a0;
+ (id)classificationForComponentWithType:(id)a0;
+ (id)classificationForComponentWithType:(id)a0 role:(id)a1;
+ (void)registerClassification;

- (id)accessibilityCustomRotorMembership;
- (Class)componentModelClass;
- (id)init;
- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (BOOL)accessibilitySkippedDuringReadAll;
- (void).cxx_destruct;
- (BOOL)isCollapsible;
- (void)setupStyleIdentifiers;

@end
