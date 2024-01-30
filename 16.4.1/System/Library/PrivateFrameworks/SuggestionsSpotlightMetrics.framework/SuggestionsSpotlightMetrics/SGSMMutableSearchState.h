@class NSMutableSet;

@interface SGSMMutableSearchState : NSObject {
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    BOOL _justEngaged;
    NSMutableSet *_resultsSeen;
}

- (void)commit;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsOtherConversion;
- (BOOL)justEngaged;
- (void)scoreAsContactLoss;
- (void)resetJustEngaged;
- (void)resetCounts;
- (void)setJustEngaged;
- (void)scoreAsContactConversion;
- (void)scoreAsContactResult;
- (void)scoreAsNonOpportunity;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (id)init;
- (void)scoreAsContactOpportunity;
- (id)description;
- (void)resetConversionCounts;
- (void).cxx_destruct;

@end
