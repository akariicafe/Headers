@class NSString, NSMutableArray;

@interface MTInMemorySyncChangeStore : NSObject <MTSyncChangeStore>

@property (retain, nonatomic) NSMutableArray *changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
