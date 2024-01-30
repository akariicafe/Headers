@class NSData, NSMutableArray, NSDate;

@interface KTTransparentData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableArray *accounts;
@property (retain) NSData *uriVRFOutput;
@property (retain) NSData *inclusionProof;
@property (retain) NSDate *currentTreeEpochBeginDate;

- (id)failedServerLoggableDatas:(id)a0 accountKey:(id)a1 requestTime:(double)a2 error:(id *)a3;
- (BOOL)updateWithMutation:(id)a0 error:(id *)a1;
- (id)accountForAccountKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)failedRecordsForSyncedLoggableDatas:(id)a0 accountKey:(id)a1 error:(id *)a2;
- (id)serialize;
- (void)addAccountsObject:(id)a0;
- (id)sortMutationsByTimestamp:(id)a0;
- (id)description;
- (id)mutationsFromSMTs:(id)a0 error:(id *)a1;
- (BOOL)validateOtherAccountKeyHashesInactiveForAccountKey:(id)a0 requestTime:(double)a1 error:(id *)a2;
- (BOOL)updateWithSMTs:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)filterLoggableDatas:(id)a0 deviceIdHash:(id)a1;
- (BOOL)updateWithMapLeaf:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithUriVRFOutput:(id)a0 mapLeaf:(id)a1 pendingSMTs:(id)a2 error:(id *)a3;
- (id)initWithUriVRFOutput:(id)a0;
- (BOOL)validateAndUpdateWithSyncedLoggableDatas:(id)a0 accountKey:(id)a1 error:(id *)a2;
- (id)earliestAddedDate:(id)a0;
- (id)accountForAccountKeyHash:(id)a0;
- (id)copy;
- (void)markAccountsWithMutationMs:(unsigned long long)a0;
- (void)removeAccountsObject:(id)a0;
- (BOOL)validateAndUpdateWithServerLoggableDatas:(id)a0 accountKey:(id)a1 requestTime:(double)a2 error:(id *)a3;
- (id)filterLoggableDatas:(id)a0 clientDataHash:(id)a1;
- (id)debugDescription;
- (BOOL)validateActiveClientDatasForAccountKey:(id)a0 error:(id *)a1;

@end
