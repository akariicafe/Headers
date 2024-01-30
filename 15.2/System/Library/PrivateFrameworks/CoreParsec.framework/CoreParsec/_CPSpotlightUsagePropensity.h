@class _CPEngagementTriggerRatio, NSString, NSData, _CPEngagementShareRatio;

@interface _CPSpotlightUsagePropensity : PBCodable <_CPSpotlightUsagePropensity, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float appLaunch;
@property (nonatomic) float onDeviceAddressBookData;
@property (nonatomic) float onDeviceOtherPersonalData;
@property (nonatomic) float punchout;
@property (nonatomic) float thirdPartyInAppContent;
@property (nonatomic) float parsec;
@property (nonatomic) float querySuggestion;
@property (nonatomic) float other;
@property (nonatomic) int totalEngagements;
@property (nonatomic) float siriSuggestions;
@property (nonatomic) float parsecWeb;
@property (nonatomic) float parsecAppStore;
@property (nonatomic) float parsecMaps;
@property (nonatomic) float parsecWiki;
@property (nonatomic) float parsecNews;
@property (nonatomic) float parsecStocks;
@property (nonatomic) float parsecWeather;
@property (nonatomic) float parsecOther;
@property (nonatomic) float webSuggestions;
@property (retain, nonatomic) _CPEngagementTriggerRatio *topHitTriggerRatio;
@property (retain, nonatomic) _CPEngagementTriggerRatio *querySuggestionTriggerRatio;
@property (nonatomic) int totalTopHitEngagements;
@property (retain, nonatomic) _CPEngagementShareRatio *engagementShareRatio;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;

@end
