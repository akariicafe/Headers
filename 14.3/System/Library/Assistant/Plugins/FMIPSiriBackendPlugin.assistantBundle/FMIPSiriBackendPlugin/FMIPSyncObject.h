@class NSString, NSObject;
@protocol FMIPSyncableObject;

@interface FMIPSyncObject : NSObject

@property (retain, nonatomic) NSString *anchor;
@property (retain, nonatomic) NSObject<FMIPSyncableObject> *object;
@property (retain, nonatomic) FMIPSyncObject *nextObject;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObject:(id)a0 nextObject:(id)a1;

@end
