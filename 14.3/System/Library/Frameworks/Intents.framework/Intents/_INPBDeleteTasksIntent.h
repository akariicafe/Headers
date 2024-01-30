@class NSArray, NSString, _INPBTaskList, _INPBIntentMetadata;

@interface _INPBDeleteTasksIntent : PBCodable <_INPBDeleteTasksIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char all : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL all;
@property (nonatomic) BOOL hasAll;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBTaskList *taskList;
@property (readonly, nonatomic) BOOL hasTaskList;
@property (copy, nonatomic) NSArray *tasks;
@property (readonly, nonatomic) unsigned long long tasksCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)tasksType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearTasks;
- (id)tasksAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTasks:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
