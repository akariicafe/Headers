@class NSString, NSMapTable, HMCPartition;

@interface HMCRedirector : HMFObject <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (readonly, nonatomic) NSMapTable *insertClass;
@property (readonly, nonatomic) NSMapTable *updateClass;
@property (readonly, nonatomic) NSMapTable *updateModelID;
@property (readonly, nonatomic) NSMapTable *deleteClass;
@property (readonly, nonatomic) NSMapTable *deleteModelID;
@property (readonly, nonatomic) HMCPartition *partition;
@property (readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)processInserts:(id)a0 updates:(id)a1 deletes:(id)a2;
- (id)initWithLabel:(id)a0 partition:(id)a1;
- (id)addTarget:(id)a0 selector:(SEL)a1 changeMask:(unsigned long long)a2 forChangesOfObjectsWithModelType:(id)a3 forChangesOfObjectsWithModelID:(id)a4;
- (void)removeTuple:(id)a0;
- (id)addTarget:(id)a0 selector:(SEL)a1 changeMask:(unsigned long long)a2 forChangesOfObjectsWithModelType:(id)a3 forChangesOfObjectsWithModelID:(id)a4 error:(id *)a5;
- (void)removeRegistrationForChangeOfObjectsOfModelType:(id)a0 forChangesOfObjectsWithModelID:(id)a1;

@end
