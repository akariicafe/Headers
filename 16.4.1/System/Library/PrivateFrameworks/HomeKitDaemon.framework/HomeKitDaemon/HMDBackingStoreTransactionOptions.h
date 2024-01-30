@class NSString;

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) HMDBackingStoreTransactionOptions *defaultLocalOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultXPCOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultResidenceOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultCloudOptionsForInitialGraphLoad;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultCloudOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *cloudRequiresPushOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *localPushBackOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultIDSOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultLegacyCloudOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultMetadataCloudOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultPreferencesOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultOutOfSyncOptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) BOOL mustReplay;
@property (readonly, nonatomic) BOOL mustPush;
@property (readonly, nonatomic) BOOL mustSaveArchiveAtomically;
@property (readonly, nonatomic) unsigned long long cdTransactionAuthor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(BOOL)a3 mustPush:(BOOL)a4 mustSaveArchiveAtomically:(BOOL)a5;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 mustReplay:(BOOL)a2 mustPush:(BOOL)a3;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 mustReplay:(BOOL)a2 mustPush:(BOOL)a3 mustSaveArchiveAtomically:(BOOL)a4;
+ (id)stringForHMDBackingStoreDestination:(unsigned long long)a0;
+ (id)stringForHMDBackingStoreTransactionSource:(unsigned long long)a0;
+ (id)defaultXPCOptionsWithCDTransactionAuthor:(unsigned long long)a0;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(BOOL)a3 mustPush:(BOOL)a4 mustSaveArchiveAtomically:(BOOL)a5 cdTransactionAuthor:(unsigned long long)a6;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (id)_description;
- (BOOL)isEqual:(id)a0;
- (id)debugString:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(BOOL)a3 mustPush:(BOOL)a4;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(BOOL)a3 mustPush:(BOOL)a4 mustSaveArchiveAtomically:(BOOL)a5;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(BOOL)a3 mustPush:(BOOL)a4 mustSaveArchiveAtomically:(BOOL)a5 cdTransactionAuthor:(unsigned long long)a6;

@end
