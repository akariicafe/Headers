@class NSString, _INPBDictionary, NSArray, _INPBArchivedObject;

@interface _INPBRunVoiceCommandIntentResponse : PBCodable <_INPBRunVoiceCommandIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char continueRunning : 1; unsigned char customResponsesDisabled : 1; unsigned char intentCategory : 1; unsigned char interstitialDisabled : 1; unsigned char prefersExecutionOnCompanion : 1; unsigned char toggleState : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL continueRunning;
@property (nonatomic) BOOL hasContinueRunning;
@property (nonatomic) BOOL customResponsesDisabled;
@property (nonatomic) BOOL hasCustomResponsesDisabled;
@property (nonatomic) int intentCategory;
@property (nonatomic) BOOL hasIntentCategory;
@property (nonatomic) BOOL interstitialDisabled;
@property (nonatomic) BOOL hasInterstitialDisabled;
@property (copy, nonatomic) NSString *localizedAppName;
@property (readonly, nonatomic) BOOL hasLocalizedAppName;
@property (retain, nonatomic) _INPBDictionary *parameters;
@property (readonly, nonatomic) BOOL hasParameters;
@property (nonatomic) BOOL prefersExecutionOnCompanion;
@property (nonatomic) BOOL hasPrefersExecutionOnCompanion;
@property (copy, nonatomic) NSString *responseTemplate;
@property (readonly, nonatomic) BOOL hasResponseTemplate;
@property (copy, nonatomic) NSArray *steps;
@property (readonly, nonatomic) unsigned long long stepsCount;
@property (nonatomic) int toggleState;
@property (nonatomic) BOOL hasToggleState;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property (readonly, nonatomic) BOOL hasUnderlyingIntent;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property (readonly, nonatomic) BOOL hasUnderlyingIntentResponse;
@property (copy, nonatomic) NSString *underlyingIntentTitle;
@property (readonly, nonatomic) BOOL hasUnderlyingIntentTitle;
@property (copy, nonatomic) NSString *verb;
@property (readonly, nonatomic) BOOL hasVerb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stepType;

- (id)stepAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)toggleStateAsString:(int)a0;
- (int)StringAsToggleState:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addStep:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)intentCategoryAsString:(int)a0;
- (int)StringAsIntentCategory:(id)a0;
- (void)clearSteps;
- (void)encodeWithCoder:(id)a0;

@end
