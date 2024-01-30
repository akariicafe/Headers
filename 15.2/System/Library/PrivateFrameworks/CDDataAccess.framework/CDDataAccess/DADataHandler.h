@class NSString;

@interface DADataHandler : NSObject

@property (copy, nonatomic) NSString *changeTrackingID;
@property (nonatomic) void *container;

+ (id)newDataHandlerForDataclass:(long long)a0 container:(void *)a1 changeTrackingID:(id)a2;

- (long long)dataclass;
- (void)openDB;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContainer:(void *)a0 changeTrackingID:(id)a1;
- (int)getIdFromLocalObject:(void *)a0;
- (void *)copyLocalObjectFromId:(int)a0;
- (BOOL)saveContainer;
- (id)copyOfAllLocalObjectsInContainer;
- (void)drainContainer;
- (BOOL)wipeServerIds;
- (void)drainSuperfluousChanges;
- (BOOL)closeDBAndSave:(BOOL)a0;
- (id)getDAObjectWithLocalItem:(void *)a0 serverId:(id)a1 account:(id)a2;
- (id)getDAExceptionObjectWithLocalItem:(void *)a0 originalEvent:(id)a1 account:(id)a2;

@end
