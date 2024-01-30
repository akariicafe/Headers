@class NSString;
@protocol CRKClassKitRosterRequirements;

@interface CRKRemoveASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) NSString *objectID;
@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)removeClass:(id)a0;
- (id)initWithObjectID:(id)a0 requirements:(id)a1;
- (void)fetchClasses;
- (void)didFetchClasses:(id)a0 error:(id)a1;
- (id)classWithObjectID:(id)a0 inClasses:(id)a1;

@end
