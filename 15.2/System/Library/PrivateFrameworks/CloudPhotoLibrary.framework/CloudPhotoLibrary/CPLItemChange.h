@class NSArray;

@interface CPLItemChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *containerRelations;

- (void).cxx_destruct;
- (id)init;
- (id)propertiesForChangeType:(unsigned long long)a0;
- (id)containerDescription;
- (id)containerRelationChangesComparedToRelationEnumerator:(id)a0 error:(id *)a1;

@end
