@class NSArray, NSUUID, NSString;

@interface ATXSuggestionLayout : NSObject <ATXSuggestionLayoutProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *oneByOneSuggestions;
@property (retain, nonatomic) NSArray *oneByTwoSuggestions;
@property (retain, nonatomic) NSArray *twoByTwoSuggestions;
@property (retain, nonatomic) NSArray *oneByFourSuggestions;
@property (retain, nonatomic) NSArray *twoByFourSuggestions;
@property (retain, nonatomic) NSArray *fourByFourSuggestions;
@property (retain, nonatomic) NSArray *fourByEightSuggestions;
@property (readonly, nonatomic) long long layoutType;
@property (nonatomic) double layoutScore;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *uuidOfHighestConfidenceSuggestion;
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

+ (id)stringFromUILayoutType:(long long)a0;
+ (id)minSuggestionLayoutTypesForUILayoutType:(long long)a0;
+ (id)maxSuggestionLayoutTypesForUILayoutType:(long long)a0;
+ (BOOL)isCompositeLayout:(long long)a0;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)allSuggestionsInLayout;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProtoData:(id)a0;
- (id)arrayOfJSONFromSuggestionArray:(id)a0;
- (id)compactDescription;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)suggestionWithUUID:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6 fourByEightSuggestions:(id)a7 uuid:(id)a8;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6 fourByEightSuggestions:(id)a7 uuid:(id)a8 layoutScore:(double)a9 isValidForSuggestionsWidget:(BOOL)a10 confidenceWarrantsSnappingOrNPlusOne:(BOOL)a11 isNPlusOne:(BOOL)a12 isLowConfidenceStackRotationForStaleStack:(BOOL)a13 widgetUniqueId:(id)a14 uuidOfHighestConfidenceSuggestion:(id)a15 numWidgetsInStack:(unsigned long long)a16;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (long long)_layoutTypeFromProtoLayoutType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)minSuggestionListInLayout;
- (BOOL)isShortcutConversion;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6 fourByEightSuggestions:(id)a7;
- (id)encodeAsProto;
- (int)_protoLayoutTypeFromLayoutType:(long long)a0;

@end
