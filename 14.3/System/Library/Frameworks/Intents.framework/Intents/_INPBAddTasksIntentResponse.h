@class NSArray, NSString, _INPBTaskList;

@interface _INPBAddTasksIntentResponse : PBCodable <_INPBAddTasksIntentResponse, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _warnings;
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *addedTasks;
@property (readonly, nonatomic) unsigned long long addedTasksCount;
@property (retain, nonatomic) _INPBTaskList *modifiedTaskList;
@property (readonly, nonatomic) BOOL hasModifiedTaskList;
@property (readonly, nonatomic) int *warnings;
@property (readonly, nonatomic) unsigned long long warningsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)addedTasksType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAddedTasks:(id)a0;
- (void)clearAddedTasks;
- (id)addedTasksAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearWarnings;
- (void)addWarnings:(int)a0;
- (int)warningsAtIndex:(unsigned long long)a0;
- (void)setWarnings:(int *)a0 count:(unsigned long long)a1;
- (id)warningsAsString:(int)a0;
- (int)StringAsWarnings:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
