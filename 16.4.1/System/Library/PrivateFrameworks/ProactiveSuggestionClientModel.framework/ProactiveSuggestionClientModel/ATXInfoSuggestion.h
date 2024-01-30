@class INIntent, NSString, NSDictionary, NSData, NSDate, NSNumber, ATXCustomIntentDescription;

@interface ATXInfoSuggestion : NSObject <NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver> {
    NSData *_intentProtoData;
    INIntent *_intent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *widgetBundleIdentifier;
@property (readonly, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) NSString *criterion;
@property (nonatomic) long long confidenceLevel;
@property (readonly, nonatomic) NSNumber *relevanceScore;
@property (nonatomic) unsigned long long layouts;
@property (copy, nonatomic) NSString *suggestionIdentifier;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) ATXCustomIntentDescription *intentDescription;
@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) BOOL isFallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoSuggestionFromProactiveSuggestion:(id)a0;
+ (id)_uiSpecForInfoSuggestion:(id)a0;
+ (id)proactiveSuggestionForInfoSuggestion:(id)a0 withClientModelId:(id)a1 clientModelVersion:(id)a2 rawScore:(double)a3 confidenceCategory:(long long)a4;
+ (id)_executableSpecificationForInfoSuggestion:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithProto:(id)a0;
- (void)handleMemoryPressure;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithProactiveSuggestion:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithAppBundleIdentifier:(id)a0 widgetBundleIdentifier:(id)a1 widgetKind:(id)a2 criterion:(id)a3 applicableLayouts:(unsigned long long)a4 suggestionIdentifier:(id)a5 startDate:(id)a6 endDate:(id)a7 intent:(id)a8 intentDescription:(id)a9 metadata:(id)a10 relevanceScore:(id)a11;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (id)dictionaryRepresentation;
- (id)initWithAppBundleIdentifier:(id)a0 widgetBundleIdentifier:(id)a1 widgetKind:(id)a2 criterion:(id)a3 applicableLayouts:(unsigned long long)a4 suggestionIdentifier:(id)a5 startDate:(id)a6 endDate:(id)a7 intentDescription:(id)a8 metadata:(id)a9 relevanceScore:(id)a10;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_safeDecodeObjectOfClass:(Class)a0 forKey:(id)a1 withCoder:(id)a2;
- (BOOL)isEqualToATXInfoSuggestion:(id)a0;
- (id)_safeDecodeObjectOfClass:(Class)a0 allowedClasses:(id)a1 forKey:(id)a2 withCoder:(id)a3;
- (id)init;
- (id)_verifyAndReturnDecodedObject:(id)a0 ofClass:(Class)a1 forKey:(id)a2 withCoder:(id)a3;
- (id)initWithAppBundleIdentifier:(id)a0 widgetBundleIdentifier:(id)a1 widgetKind:(id)a2 criterion:(id)a3 applicableLayouts:(unsigned long long)a4 suggestionIdentifier:(id)a5 startDate:(id)a6 endDate:(id)a7 intent:(id)a8 metadata:(id)a9 relevanceScore:(id)a10;
- (void).cxx_destruct;
- (id)_dictionaryRepresentationAvoidingLoadingIntentIfPossible:(BOOL)a0;

@end
