@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBCreateTaskListIntent : PBCodable <_INPBCreateTaskListIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *groupName;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *taskTitles;
@property (readonly, nonatomic) unsigned long long taskTitlesCount;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)taskTitlesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearTaskTitles;
- (void)addTaskTitles:(id)a0;
- (id)taskTitlesAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
