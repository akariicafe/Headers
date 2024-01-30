@class NSDictionary;

@interface TTSAssistantVoiceMaps : NSObject {
    void /* unknown type, empty encoding */ voicesForLanguageMap;
    void /* unknown type, empty encoding */ deprecatedVoicesMap;
    void /* unknown type, empty encoding */ relativePitchOrderForVoicesMap;
    void /* unknown type, empty encoding */ relativeOrderForVoicesMap;
    void /* unknown type, empty encoding */ identifiersForVoicesMap;
}

@property (nonatomic, readonly) NSDictionary *voicesForLanguageMap;
@property (nonatomic, readonly) NSDictionary *deprecatedVoicesMap;
@property (nonatomic, readonly) NSDictionary *relativePitchOrderForVoicesMap;
@property (nonatomic, readonly) NSDictionary *relativeOrderForVoicesMap;
@property (nonatomic, readonly) NSDictionary *identifiersForVoicesMap;

- (id)init;
- (void).cxx_destruct;

@end
