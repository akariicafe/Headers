@class POMMESSchemaPOMMESClientEventMetadata, POMMESSchemaPOMMESOnDeviceIndexSearchContext, SISchemaInstrumentationMessage, POMMESSchemaPOMMESPegasusRequestContext, POMMESSchemaPOMMESProfileSliceResolutionRequestContext, POMMESSchemaPOMMESPegasusKitPegasusRequestContext, NSData, POMMESSchemaPOMMESServiceClassifierScoreReported, POMMESSchemaPOMMESDebugPerformanceReported, POMMESSchemaPOMMESRequestContext;

@interface POMMESSchemaPOMMESClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) POMMESSchemaPOMMESClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestContext *pegasusRequestContext;
@property (nonatomic) BOOL hasPegasusRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceIndexSearchContext *onDeviceIndexSearchContext;
@property (nonatomic) BOOL hasOnDeviceIndexSearchContext;
@property (retain, nonatomic) POMMESSchemaPOMMESServiceClassifierScoreReported *pommesServiceClassifierScoreReported;
@property (nonatomic) BOOL hasPommesServiceClassifierScoreReported;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestContext *pommesRequestContext;
@property (nonatomic) BOOL hasPommesRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESDebugPerformanceReported *performanceReported;
@property (nonatomic) BOOL hasPerformanceReported;
@property (retain, nonatomic) POMMESSchemaPOMMESProfileSliceResolutionRequestContext *profileResolutionRequestContext;
@property (nonatomic) BOOL hasProfileResolutionRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitPegasusRequestContext *pegasusKitRequestContext;
@property (nonatomic) BOOL hasPegasusKitRequestContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (int)componentName;
- (int)getAnyEventType;
- (id)suppressMessageUnderConditions;
- (id)qualifiedMessageName;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deleteOnDeviceIndexSearchContext;
- (void)deletePegasusKitRequestContext;
- (void)deletePegasusRequestContext;
- (void)deletePerformanceReported;
- (void)deletePommesRequestContext;
- (void)deletePommesServiceClassifierScoreReported;
- (void)deleteProfileResolutionRequestContext;
- (id)getComponentId;

@end
