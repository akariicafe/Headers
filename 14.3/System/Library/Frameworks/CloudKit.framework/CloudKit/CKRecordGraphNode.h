@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject

@property (retain, nonatomic) NSMutableSet *edges;
@property (readonly, nonatomic) NSMutableSet *indegrees;
@property (readonly, nonatomic) unsigned long long indegree;
@property (retain, nonatomic) CKRecord *record;

- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
