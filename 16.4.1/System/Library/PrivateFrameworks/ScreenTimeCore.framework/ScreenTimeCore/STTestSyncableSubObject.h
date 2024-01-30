@class NSString, STTestSyncableObject;
@protocol STSerializableManagedObject;

@interface STTestSyncableSubObject : NSManagedObject <STSyncableSubObject>

@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) STTestSyncableObject *root;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
