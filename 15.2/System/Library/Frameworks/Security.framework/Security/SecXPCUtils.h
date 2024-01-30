@interface SecXPCUtils : NSObject

+ (BOOL)clientCanEditPreferenceOwnership;
+ (struct __CFString { } *)copySigningIdentifier:(id)a0;
+ (struct __CFString { } *)copyApplicationIdentifierFromSelf;
+ (struct __CFString { } *)copyApplicationIdentifierFromConnection:(id)a0;
+ (struct __CFString { } *)copyApplicationIdentifier;

@end
