@class ClientConnection;

@interface CADOperationGroup : NSObject

@property (readonly, nonatomic) ClientConnection *conn;

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (id)whitelistedBundles;
+ (BOOL)requiresEventOrReminderAccess;

- (id)initWithClientConnection:(id)a0;
- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (void).cxx_destruct;

@end
