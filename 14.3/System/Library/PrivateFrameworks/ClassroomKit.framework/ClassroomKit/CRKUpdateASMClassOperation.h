@class NSString, CRKASMCourseUpdateProperties;
@protocol CRKClassKitRosterRequirements;

@interface CRKUpdateASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) NSString *objectID;
@property (readonly, copy, nonatomic) CRKASMCourseUpdateProperties *properties;
@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithObjectID:(id)a0 properties:(id)a1 requirements:(id)a2;
- (void)fetchClasses;
- (void)didFetchClasses:(id)a0 error:(id)a1;
- (id)classWithObjectID:(id)a0 inClasses:(id)a1;
- (void)applyPropertiesToClass:(id)a0;
- (id)makePropertyApplicator;
- (void)saveClass:(id)a0;

@end
