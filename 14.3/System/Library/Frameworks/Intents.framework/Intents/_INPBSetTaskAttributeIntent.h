@class _INPBSpatialEventTrigger, NSString, _INPBContactEventTrigger, _INPBDataString, _INPBTask, _INPBIntentMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetTaskAttributeIntent : PBCodable <_INPBSetTaskAttributeIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char priority : 1; unsigned char status : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (readonly, nonatomic) BOOL hasContactEventTrigger;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int priority;
@property (nonatomic) BOOL hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) _INPBTask *targetTask;
@property (readonly, nonatomic) BOOL hasTargetTask;
@property (retain, nonatomic) _INPBDataString *taskTitle;
@property (readonly, nonatomic) BOOL hasTaskTitle;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)priorityAsString:(int)a0;
- (int)StringAsPriority:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
