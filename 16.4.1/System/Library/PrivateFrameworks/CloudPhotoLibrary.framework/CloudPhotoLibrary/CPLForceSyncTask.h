@class NSString, NSArray;

@interface CPLForceSyncTask : NSObject

@property (copy, nonatomic) NSString *taskIdentifier;
@property (readonly, copy, nonatomic) NSArray *scopeIdentifiers;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

- (id)description;
- (void).cxx_destruct;
- (void)cancelTask;
- (id)initWithScopeIdentifiers:(id)a0;
- (void)launchTask;

@end
