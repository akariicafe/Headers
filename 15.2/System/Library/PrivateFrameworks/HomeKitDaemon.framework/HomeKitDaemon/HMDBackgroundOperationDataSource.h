@class NSString, NSDictionary, HMDBackgroundOperationManager;

@interface HMDBackgroundOperationDataSource : HMFObject

@property (class, readonly) NSString *name;

@property (readonly, weak) HMDBackgroundOperationManager *owner;
@property (readonly, copy) NSDictionary *values;

- (void).cxx_destruct;
- (id)initWithOperationManager:(id)a0;
- (void)notifyDataSourceChanged;

@end
