@class _INPBSpatialEventTrigger, NSString, _INPBDateTime, _INPBContactEventTrigger, _INPBDataString, _INPBTemporalEventTrigger;

@interface _INPBTask : PBCodable <_INPBTask, NSSecureCoding, NSCopying> {
    struct { unsigned char priority : 1; unsigned char status : 1; unsigned char taskReference : 1; unsigned char taskType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (readonly, nonatomic) BOOL hasContactEventTrigger;
@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (readonly, nonatomic) BOOL hasCreatedDateTime;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (readonly, nonatomic) BOOL hasModifiedDateTime;
@property (copy, nonatomic) NSString *parentIdentifier;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (nonatomic) int priority;
@property (nonatomic) BOOL hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int taskReference;
@property (nonatomic) BOOL hasTaskReference;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsPriority:(id)a0;
- (int)StringAsTaskReference:(id)a0;
- (int)StringAsTaskType:(id)a0;
- (id)priorityAsString:(int)a0;
- (id)taskReferenceAsString:(int)a0;
- (id)taskTypeAsString:(int)a0;

@end
