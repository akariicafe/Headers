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

- (void)commit;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (void)scoreAsContactLoss;
- (void)scoreAsOtherConversion;
- (void)scoreAsNonOpportunity;
- (id)init;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void).cxx_destruct;
- (id)description;
- (void)resetCounts;
- (void)scoreAsContactResult;
- (void)setJustEngaged;
- (void)resetConversionCounts;
- (BOOL)justEngaged;
- (void)resetJustEngaged;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactConversion;

@end
