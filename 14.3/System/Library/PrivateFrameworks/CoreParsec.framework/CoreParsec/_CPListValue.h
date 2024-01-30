@class NSString, NSDictionary, NSArray, NSData;

@interface _CPListValue : PBCodable <_CPFeedbackJSONObject, _CPListValue, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)clearValues;
- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)valuesCount;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
