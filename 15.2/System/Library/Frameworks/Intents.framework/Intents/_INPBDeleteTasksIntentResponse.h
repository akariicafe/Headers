@class NSArray, NSString;

@interface _INPBDeleteTasksIntentResponse : PBCodable <_INPBDeleteTasksIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *deletedTasks;
@property (readonly, nonatomic) unsigned long long deletedTasksCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)deletedTasksType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearDeletedTasks;
- (void)addDeletedTasks:(id)a0;
- (id)deletedTasksAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
