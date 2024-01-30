@class NSSet;

@interface IntelligencePlatformCore.NuclearFamilyModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ contactFamilyName;
    void /* unknown type, empty encoding */ thirdPartyMsgDayRatio;
    void /* unknown type, empty encoding */ thirdPartyMsgTwoWeeks;
    void /* unknown type, empty encoding */ firstPartyMsgDayRatio;
    void /* unknown type, empty encoding */ firstPartyMsgOutgoingRatio;
    void /* unknown type, empty encoding */ firstPartyMsgSixWeeks;
    void /* unknown type, empty encoding */ firstPartyMsgTwoWeeks;
    void /* unknown type, empty encoding */ callMaxDur;
    void /* unknown type, empty encoding */ callOutgoingRatio;
    void /* unknown type, empty encoding */ callSixWeeks;
    void /* unknown type, empty encoding */ callTotal;
    void /* unknown type, empty encoding */ callTotalDur;
    void /* unknown type, empty encoding */ callTwelveWeeks;
    void /* unknown type, empty encoding */ callTwoWeeks;
    void /* unknown type, empty encoding */ callLongRatio;
    void /* unknown type, empty encoding */ callBirthday;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
