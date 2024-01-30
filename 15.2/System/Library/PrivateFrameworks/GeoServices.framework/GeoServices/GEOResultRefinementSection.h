@class NSString, NSArray;

@interface GEOResultRefinementSection : NSObject

@property (copy, nonatomic) NSString *sectionHeader;
@property (copy, nonatomic) NSArray *resultRefinements;
@property (nonatomic) long long refinementsType;

- (void).cxx_destruct;
- (id)initWithSectionHeader:(id)a0 resultRefinements:(id)a1;
- (id)initWithResultRefinementSection:(id)a0;
- (id)convertToGEOPDResultRefinementSection;

@end
