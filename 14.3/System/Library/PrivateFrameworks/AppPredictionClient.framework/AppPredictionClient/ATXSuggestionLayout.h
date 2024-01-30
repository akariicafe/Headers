@class NSArray, NSUUID, NSString;

@interface ATXSuggestionLayout : NSObject <ATXProtoBufWrapper, ATXSuggestionLayoutProtocol, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *oneByOneSuggestions;
@property (retain, nonatomic) NSArray *oneByTwoSuggestions;
@property (retain, nonatomic) NSArray *twoByTwoSuggestions;
@property (retain, nonatomic) NSArray *oneByFourSuggestions;
@property (retain, nonatomic) NSArray *twoByFourSuggestions;
@property (readonly, nonatomic) long long layoutType;
@property (nonatomic) double layoutScore;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *uuidOfHighestConfidenceSuggestion;
@property (readonly, nonatomic) NSArray *fourByFourSuggestions;
@property (nonatomic) BOOL isValidForSuggestionsWidget;
@property (nonatomic) BOOL confidenceWarrantsSnappingOrNPlusOne;
@property (nonatomic) BOOL isNPlusOne;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;
@property (nonatomic) unsigned long long numWidgetsInStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minSuggestionLayoutTypesForUILayoutType:(long long)a0;
+ (id)stringFromUILayoutType:(long long)a0;
+ (id)uiLayoutTypesForStackLayoutSize:(unsigned long long)a0;
+ (id)maxSuggestionLayoutTypesForUILayoutType:(long long)a0;

- (id)jsonRawData;
- (BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)arrayOfJSONFromSuggestionArray:(id)a0;
- (long long)_layoutTypeFromProtoLayoutType:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)minSuggestionListInLayout;
- (id)initWithProtoData:(id)a0;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (int)_protoLayoutTypeFromLayoutType:(long long)a0;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6 uuid:(id)a7 layoutScore:(double)a8 isValidForSuggestionsWidget:(BOOL)a9 confidenceWarrantsSnappingOrNPlusOne:(BOOL)a10 isNPlusOne:(BOOL)a11 isLowConfidenceStackRotationForStaleStack:(BOOL)a12 widgetUniqueId:(id)a13 uuidOfHighestConfidenceSuggestion:(id)a14 numWidgetsInStack:(unsigned long long)a15;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isShortcutConversion;
- (BOOL)isEqual:(id)a0;
- (id)allSuggestionsInLayout;
- (id)suggestionWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6 uuid:(id)a7;

@end
