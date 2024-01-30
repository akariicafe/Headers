@class NSString, NSDictionary, NSArray, NSData;

@interface _CPVisibleSuggestionsFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleSuggestionsFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)clearSuggestions;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)suggestionsCount;
- (id)initWithFacade:(id)a0;

@end
