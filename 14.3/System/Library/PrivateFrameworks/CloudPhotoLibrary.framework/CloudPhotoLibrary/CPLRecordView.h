@class CPLRecordChange, CPLScopedIdentifier;

@interface CPLRecordView : NSObject

@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *synthesizedRecord;

- (id)redactedDescription;
- (BOOL)supportsResources;
- (id)relation;
- (id)description;
- (Class)recordClass;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)changeForType:(unsigned long long)a0;

@end
