@interface CKUtilities : NSObject

+ (BOOL)isIpad;
+ (BOOL)userDefaultBoolForKey:(id)a0;
+ (BOOL)deviceHasMultipleSubscriptions;
+ (BOOL)carrierDefaultBoolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (BOOL)carrierDefaultBoolForKey:(id)a0;
+ (id)deviceSpecificNameForKey:(id)a0;
+ (id)threadIdentifierForMessagePart:(id)a0;
+ (id)threadOriginatorForMessagePart:(id)a0;
+ (unsigned long long)messageJunkStatus;
+ (id)imMessageForIMMessageItem:(id)a0;

@end
