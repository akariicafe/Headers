@class NSDictionary, NSString, NSData;

@interface _CPStartNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPStartNetworkSearchFeedback, NSSecureCoding> {
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
@property (readonly, copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) int endpoint;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int lookupSelectionType;
@property (nonatomic) int tuscanyStatus;
@property (copy, nonatomic) NSData *bodyData;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTrigger;
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
- (void)clearTrigger;
- (void)setHeaders:(id)a0 forKey:(id)a1;
- (BOOL)getHeaders:(id *)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
