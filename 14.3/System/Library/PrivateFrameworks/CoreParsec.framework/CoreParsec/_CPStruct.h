@class NSDictionary, NSString, NSData;

@interface _CPStruct : PBCodable <_CPFeedbackJSONObject, _CPStruct, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *stringKeyFields;
@property (copy, nonatomic) NSDictionary *intKeyFields;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setStringKeyFields:(id)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void)setIntKeyFields:(id)a0 forKey:(int)a1;
- (BOOL)getStringKeyFields:(id *)a0 forKey:(id)a1;
- (BOOL)getIntKeyFields:(id *)a0 forKey:(int)a1;
- (id)initWithFacade:(id)a0;

@end
