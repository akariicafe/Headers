@class NSDictionary, HDFHIRIngestionResourceFetchOperation;

@interface HDClinicalIngestionTaskWorkItem : NSObject

@property (readonly, copy, nonatomic) NSDictionary *targetResourceURLsBySourceResource;
@property (readonly, nonatomic) HDFHIRIngestionResourceFetchOperation *resourceFetchOperation;

- (void).cxx_destruct;
- (id)initWithResourceFetchOperation:(id)a0;
- (id)initWithTargetResourceURLsBySourceResource:(id)a0;

@end
