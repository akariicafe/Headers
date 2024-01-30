@class NSArray, SXComponentTextRules, SXComponentLayoutRules;

@interface SXComponentClassification : NSObject

@property (readonly, nonatomic) NSArray *defaultStyleIdentifiers;
@property (readonly, nonatomic) SXComponentLayoutRules *layoutRules;
@property (readonly, nonatomic) SXComponentTextRules *textRules;
@property (readonly, nonatomic) NSArray *defaultTextStyleIdentifiers;
@property (readonly, nonatomic) NSArray *defaultComponentStyleIdentifiers;
@property (readonly, nonatomic) unsigned long long contentRelevance;

+ (void)initialize;
+ (int)role;
+ (id)typeString;
+ (BOOL)shouldRegister;
+ (id)roleString;
+ (id)classificationForComponentWithRole:(int)a0;
+ (id)classificationForComponentWithType:(id)a0 role:(id)a1;
+ (void)registerClassification;
+ (id)classificationForComponentWithType:(id)a0;

- (BOOL)isCollapsible;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)accessibilityContextualLabel;
- (Class)componentModelClass;
- (id)accessibilityCustomRotorMembership;
- (BOOL)accessibilitySkippedDuringReadAll;
- (void)setupStyleIdentifiers;

@end
