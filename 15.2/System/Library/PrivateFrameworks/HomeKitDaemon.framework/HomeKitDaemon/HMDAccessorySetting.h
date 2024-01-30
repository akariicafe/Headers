@class NSUUID, NSString, NSArray, HMDAccessorySettingModel, HMFMessageDispatcher, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDAccessorySetting : HMFObject <HMFLogging, HMDAccessorySettingUpdateProtocol, HMDAccessorySettingProtocol, NSSecureCoding, HMDSettingBaseProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_inMemoryCachedConstraintRemovals;
    NSMutableArray *_inMemoryCachedConstraints;
    NSMutableArray *_constraints;
    id _value;
    NSString *_name;
    long long _type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDAccessorySettingModel *model;
@property (readonly, copy) NSArray *models;
@property (nonatomic) unsigned long long configurationVersion;
@property (readonly) BOOL isCollectionType;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) unsigned long long properties;
@property (readonly) NSString *keyPath;
@property (getter=isReflected) BOOL reflected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long type;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *constraints;
@property (readonly, copy) id value;
@property (readonly, copy) NSUUID *parentIdentifier;

+ (id)logCategory;
+ (id)supportedValueClasses;
+ (id)supportedConstraintClasses;
+ (id)decodedValue:(id)a0 error:(id *)a1;

- (void)_setType:(long long)a0;
- (void)setGroup:(id)a0;
- (void)setConstraints:(id)a0;
- (void)setValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithIdentifier:(id)a0 name:(id)a1;
- (void)addConstraint:(id)a0;
- (BOOL)isValid:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)removeConstraint:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModel:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (id)modelsForConstraintsUpdate:(id)a0;
- (BOOL)isConstraintMergeStrategyReflection;
- (id)copyReplica;
- (id)copyIdentical;
- (BOOL)compareConstraints:(id)a0;
- (id)constraintWithIdentifier:(id)a0;
- (id)counterpartConstraintFor:(id)a0;
- (id)constraintsForCodingXPC;
- (id)inMemoryConstraintWithIdentifier:(id)a0;
- (void)removeConstraintsInMemory:(id)a0;
- (void)addConstraintsInMemory:(id)a0;
- (BOOL)canRemoveConstraint:(id)a0;
- (BOOL)canAddConstraint:(id)a0 error:(id *)a1;
- (BOOL)shouldTurnOffPersonalRequestsOnLanguageChangeTo:(id)a0 supportedMultiUserLanguageCodes:(id)a1 isMultiUserEnabled:(BOOL)a2;
- (BOOL)shouldBlockSettingUpdateFromVersion:(id)a0 isMultiUserEnabled:(BOOL)a1;
- (void)mergeConstraintsFromOther:(id)a0;
- (id)replicatedMissingConstraintsFrom:(id)a0;
- (void)_mergeConstraintsLocallyWithAdditions:(id)a0 removals:(id)a1;
- (id)_modelsForMergeStrategyConstraintsUpdate:(id)a0;

@end
