@class SGMContactResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight, SGMContactResultInSpotlight, NSMutableSet, SGMContactOpportunityInSpotlight;

@interface SGSMMutableSearchState : NSObject {
    SGMContactOpportunityInSpotlight *_contactOpportunity;
    SGMContactResultInSpotlight *_contactResult;
    SGMContactResultSelectedInSpotlight *_contactSelected;
    SGMNoResultSelectedInSpotlight *_noneSelected;
    SGMOtherResultSelectedInSpotlight *_otherSelected;
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

- (void)setJustEngaged;
- (void)scoreAsOtherConversion;
- (void)scoreAsContactOpportunity;
- (void)commit;
- (void)scoreAsNonOpportunity;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (id)description;
- (void)scoreAsContactLoss;
- (void)resetConversionCounts;
- (void).cxx_destruct;
- (id)init;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)resetJustEngaged;
- (BOOL)justEngaged;
- (void)scoreAsContactResult;
- (void)resetCounts;
- (void)scoreAsContactConversion;

@end
