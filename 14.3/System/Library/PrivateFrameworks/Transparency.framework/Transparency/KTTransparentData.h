@class NSData, NSMutableArray, NSDate;

@interface KTTransparentData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableArray *accounts;
@property (retain) NSData *uriVRFOutput;
@property (retain) NSData *inclusionProof;
@property (retain) NSDate *currentTreeEpochBeginDate;

+ (id)filterLoggableDatas:(id)a0 deviceIdVRFOutput:(id)a1;
+ (id)filterLoggableDatas:(id)a0 clientDataVRFOutput:(id)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)accountForAccountId:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)updateWithMutation:(id)a0 error:(id *)a1;
- (id)devicesMissingVRFs:(id)a0 maximum:(long long)a1;
- (id)clientDatasMissingVRFs:(id)a0 maximum:(long long)a1;
- (id)initWithUriVRFOutput:(id)a0 mapLeaf:(id)a1 pendingSMTs:(id)a2 error:(id *)a3;
- (id)earliestAddedDate:(id)a0;
- (BOOL)validateAndUpdateWithServerLoggableDatas:(id)a0 accountId:(id)a1 requestTime:(double)a2 error:(id *)a3;
- (BOOL)validateOtherAccountIDsInactiveForAccountId:(id)a0 requestTime:(double)a1 error:(id *)a2;
- (BOOL)validateActiveClientDatasForAccountId:(id)a0 error:(id *)a1;
- (BOOL)validateAndUpdateWithSyncedLoggableDatas:(id)a0 accountId:(id)a1 error:(id *)a2;
- (BOOL)updateWithMapLeaf:(id)a0 error:(id *)a1;
- (BOOL)updateWithSMTs:(id)a0 error:(id *)a1;
- (void)markAccountsWithMutationMs:(unsigned long long)a0;
- (void)addAccountsObject:(id)a0;
- (void)removeAccountsObject:(id)a0;
- (id)mutationsFromSMTs:(id)a0 error:(id *)a1;
- (id)sortMutationsByTimestamp:(id)a0;
- (id)initWithUriVRFOutput:(id)a0;

@end
