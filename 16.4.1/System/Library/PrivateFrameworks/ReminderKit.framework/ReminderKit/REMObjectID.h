@class NSString, NSUUID, NSURL;

@interface REMObjectID : NSObject <REMDAChangedIdentifierResult, REMCRMergeableDataType, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *entityName;
@property (readonly, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) NSURL *urlRepresentation;

+ (void)initialize;
+ (id)objectIDWithUUID:(id)a0 entityName:(id)a1;
+ (id)objectIDWithURL:(id)a0;
+ (void)rem_registerClassAtCRCoderIfNeeded;

- (void)encodeWithCoder:(id)a0;
- (void)setDocument:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)mergeWith:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)tombstone;
- (id)initWithUUID:(id)a0 entityName:(id)a1;
- (void).cxx_destruct;

@end
