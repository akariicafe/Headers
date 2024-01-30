@class NSSet;
@protocol HMIHomePersonManagerDataSource;

@interface HMIRemovePersonsOperation : HMFOperation

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) NSSet *personUUIDs;

+ (id)logCategory;

- (void)main;
- (void).cxx_destruct;
- (void)mainInsideAutoreleasePool;
- (id)initWithDataSource:(id)a0 personUUIDs:(id)a1;

@end
