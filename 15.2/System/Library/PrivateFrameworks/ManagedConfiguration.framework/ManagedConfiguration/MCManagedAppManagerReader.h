@interface MCManagedAppManagerReader : NSObject

+ (id)managedAppIDsWithFlags:(int)a0;
+ (id)attributesByAppID;
+ (int)_MCMAMManagementFlagsToMDMManagedAppFlag:(int)a0;

@end
