@class NSString, CPLScopedIdentifier;

@interface CPLPlaceholderRecord : NSObject

@property (readonly, nonatomic) Class recordClass;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) Class relatedRecordClass;
@property (readonly, nonatomic) NSString *relatedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *relatedScopedIdentifier;

- (id)redactedDescription;
- (id)initWithRecord:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordClass:(Class)a0 scopedIdentifier:(id)a1 relatedRecordClass:(Class)a2 relatedIdentifier:(id)a3;
- (id)translateToClientRecordUsingIDMapping:(id)a0;
- (id)translateToCloudRecordUsingIDMapping:(id)a0;

@end
