@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject

@property (retain, nonatomic) NSMutableSet *edges;
@property (readonly, nonatomic) NSMutableSet *indegrees;
@property (readonly, nonatomic) unsigned long long indegree;
@property (retain, nonatomic) CKRecord *record;

- (id)init;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
