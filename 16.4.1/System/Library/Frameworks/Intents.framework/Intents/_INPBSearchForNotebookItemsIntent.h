@class NSString, _INPBDateTimeRange, _INPBDataString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBSearchForNotebookItemsIntent : PBCodable <_INPBSearchForNotebookItemsIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _temporalEventTriggerTypes;
    struct { unsigned char dateSearchType : 1; unsigned char includeAllNoteContents : 1; unsigned char itemType : 1; unsigned char locationSearchType : 1; unsigned char status : 1; unsigned char taskPriority : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) int dateSearchType;
@property (nonatomic) BOOL hasDateSearchType;
@property (retain, nonatomic) _INPBDateTimeRange *dateTime;
@property (readonly, nonatomic) BOOL hasDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (nonatomic) BOOL includeAllNoteContents;
@property (nonatomic) BOOL hasIncludeAllNoteContents;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int itemType;
@property (nonatomic) BOOL hasItemType;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) int locationSearchType;
@property (nonatomic) BOOL hasLocationSearchType;
@property (copy, nonatomic) NSString *notebookItemIdentifier;
@property (readonly, nonatomic) BOOL hasNotebookItemIdentifier;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int taskPriority;
@property (nonatomic) BOOL hasTaskPriority;
@property (readonly, nonatomic) int *temporalEventTriggerTypes;
@property (readonly, nonatomic) unsigned long long temporalEventTriggerTypesCount;
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
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsDateSearchType:(id)a0;
- (int)StringAsLocationSearchType:(id)a0;
- (int)StringAsItemType:(id)a0;
- (int)StringAsTaskPriority:(id)a0;
- (int)StringAsTemporalEventTriggerTypes:(id)a0;
- (void)addTemporalEventTriggerType:(int)a0;
- (void)clearTemporalEventTriggerTypes;
- (id)dateSearchTypeAsString:(int)a0;
- (id)itemTypeAsString:(int)a0;
- (id)locationSearchTypeAsString:(int)a0;
- (void)setTemporalEventTriggerTypes:(int *)a0 count:(unsigned long long)a1;
- (id)taskPriorityAsString:(int)a0;
- (int)temporalEventTriggerTypeAtIndex:(unsigned long long)a0;
- (id)temporalEventTriggerTypesAsString:(int)a0;

@end
