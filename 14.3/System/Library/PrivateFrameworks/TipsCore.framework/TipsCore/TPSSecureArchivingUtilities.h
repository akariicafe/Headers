@interface TPSSecureArchivingUtilities : NSObject

+ (id)secureUnarchiveForKey:(id)a0 classSet:(id)a1;
+ (void)secureArchive:(id)a0 forKey:(id)a1;
+ (void)secureArchive:(id)a0 forKey:(id)a1 userDefaults:(id)a2;
+ (id)secureUnarchiveForKey:(id)a0 classSet:(id)a1 userDefaults:(id)a2;

@end
