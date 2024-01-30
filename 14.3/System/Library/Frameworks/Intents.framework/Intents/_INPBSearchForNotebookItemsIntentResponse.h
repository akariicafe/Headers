@class NSArray, NSString;

@interface _INPBSearchForNotebookItemsIntentResponse : PBCodable <_INPBSearchForNotebookItemsIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char sortType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *notes;
@property (readonly, nonatomic) unsigned long long notesCount;
@property (nonatomic) int sortType;
@property (nonatomic) BOOL hasSortType;
@property (copy, nonatomic) NSArray *taskLists;
@property (readonly, nonatomic) unsigned long long taskListsCount;
@property (copy, nonatomic) NSArray *tasks;
@property (readonly, nonatomic) unsigned long long tasksCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)notesType;
+ (Class)taskListsType;
+ (Class)tasksType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (void)addNotes:(id)a0;
- (id)notesAtIndex:(unsigned long long)a0;
- (id)sortTypeAsString:(int)a0;
- (int)StringAsSortType:(id)a0;
- (void)clearTaskLists;
- (void)addTaskLists:(id)a0;
- (id)taskListsAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearTasks;
- (id)tasksAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTasks:(id)a0;
- (void)clearNotes;
- (void)encodeWithCoder:(id)a0;

@end
