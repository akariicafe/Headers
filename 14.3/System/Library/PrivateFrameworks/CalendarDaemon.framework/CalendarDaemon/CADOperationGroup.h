@class ClientConnection;

@interface CADOperationGroup : NSObject

@property (readonly, nonatomic) ClientConnection *conn;

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (id)whitelistedBundles;
+ (BOOL)requiresReminderAccess;

- (void).cxx_destruct;
- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (id)initWithClientConnection:(id)a0;

@end
