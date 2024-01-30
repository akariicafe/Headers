@class NSString, NSMutableArray;

@interface ATXPBSuggestionLayout : PBCodable <NSCopying> {
    struct { unsigned char layoutScore : 1; unsigned char numWidgetsInStack : 1; unsigned char layoutType : 1; unsigned char confidenceWarrantsSnappingOrNPlusOne : 1; unsigned char isLowConfidenceStackRotationForStaleStack : 1; unsigned char isNPlusOne : 1; unsigned char isValidForSuggestionsWidget : 1; } _has;
}

@property (nonatomic) BOOL hasLayoutType;
@property (nonatomic) int layoutType;
@property (nonatomic) BOOL hasLayoutScore;
@property (nonatomic) double layoutScore;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *oneByOneSuggestions;
@property (retain, nonatomic) NSMutableArray *oneByTwoSuggestions;
@property (retain, nonatomic) NSMutableArray *twoByTwoSuggestions;
@property (retain, nonatomic) NSMutableArray *oneByFourSuggestions;
@property (retain, nonatomic) NSMutableArray *twoByFourSuggestions;
@property (nonatomic) BOOL hasIsValidForSuggestionsWidget;
@property (nonatomic) BOOL isValidForSuggestionsWidget;
@property (nonatomic) BOOL hasConfidenceWarrantsSnappingOrNPlusOne;
@property (nonatomic) BOOL confidenceWarrantsSnappingOrNPlusOne;
@property (nonatomic) BOOL hasIsNPlusOne;
@property (nonatomic) BOOL isNPlusOne;
@property (readonly, nonatomic) BOOL hasWidgetUniqueId;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (nonatomic) BOOL hasIsLowConfidenceStackRotationForStaleStack;
@property (nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;
@property (readonly, nonatomic) BOOL hasUuidOfHighestConfidenceSuggestion;
@property (retain, nonatomic) NSString *uuidOfHighestConfidenceSuggestion;
@property (nonatomic) BOOL hasNumWidgetsInStack;
@property (nonatomic) unsigned long long numWidgetsInStack;
@property (retain, nonatomic) NSMutableArray *fourByFourSuggestions;
@property (retain, nonatomic) NSMutableArray *fourByEightSuggestions;

+ (Class)oneByOneSuggestionsType;
+ (Class)oneByTwoSuggestionsType;
+ (Class)twoByTwoSuggestionsType;
+ (Class)oneByFourSuggestionsType;
+ (Class)twoByFourSuggestionsType;
+ (Class)fourByFourSuggestionsType;
+ (Class)fourByEightSuggestionsType;

- (id)layoutTypeAsString:(int)a0;
- (void)addOneByTwoSuggestions:(id)a0;
- (unsigned long long)oneByFourSuggestionsCount;
- (unsigned long long)twoByTwoSuggestionsCount;
- (id)fourByEightSuggestionsAtIndex:(unsigned long long)a0;
- (id)twoByFourSuggestionsAtIndex:(unsigned long long)a0;
- (void)clearTwoByFourSuggestions;
- (id)fourByFourSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)oneByOneSuggestionsCount;
- (unsigned long long)oneByTwoSuggestionsCount;
- (BOOL)readFrom:(id)a0;
- (void)clearOneByTwoSuggestions;
- (id)description;
- (id)twoByTwoSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)fourByFourSuggestionsCount;
- (void)clearOneByFourSuggestions;
- (void)addTwoByFourSuggestions:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addFourByEightSuggestions:(id)a0;
- (void).cxx_destruct;
- (id)oneByOneSuggestionsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearOneByOneSuggestions;
- (void)clearFourByFourSuggestions;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addOneByOneSuggestions:(id)a0;
- (void)copyTo:(id)a0;
- (void)addTwoByTwoSuggestions:(id)a0;
- (void)addFourByFourSuggestions:(id)a0;
- (unsigned long long)twoByFourSuggestionsCount;
- (void)addOneByFourSuggestions:(id)a0;
- (id)oneByTwoSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (int)StringAsLayoutType:(id)a0;
- (unsigned long long)fourByEightSuggestionsCount;
- (void)clearFourByEightSuggestions;
- (id)dictionaryRepresentation;
- (id)oneByFourSuggestionsAtIndex:(unsigned long long)a0;
- (void)clearTwoByTwoSuggestions;

@end
