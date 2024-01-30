@class NSString, NSMutableArray, ATXPBShortcutsEditorEventMetadata;

@interface ATXPBShortcutsEditorEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) ATXPBShortcutsEditorEventMetadata *metadata;

+ (Class)suggestionUUIDsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addSuggestionUUIDs:(id)a0;
- (unsigned long long)suggestionUUIDsCount;
- (void)clearSuggestionUUIDs;
- (id)suggestionUUIDsAtIndex:(unsigned long long)a0;

@end
