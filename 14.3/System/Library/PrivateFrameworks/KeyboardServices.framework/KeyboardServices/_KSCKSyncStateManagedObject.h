@class NSData;

@interface _KSCKSyncStateManagedObject : NSManagedObject

@property (retain, nonatomic) NSData *fetchChangeToken;
@property (nonatomic) BOOL didPullOnce;

@end
