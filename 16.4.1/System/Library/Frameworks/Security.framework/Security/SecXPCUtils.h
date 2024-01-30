@interface SecXPCUtils : NSObject

+ (BOOL)clientCanEditPreferenceOwnership;
+ (struct __CFString { } *)copyApplicationIdentifier;
+ (struct __CFString { } *)copyApplicationIdentifierFromConnection:(id)a0;
+ (struct __CFString { } *)copyApplicationIdentifierFromSelf;
+ (struct __CFString { } *)copySigningIdentifier:(id)a0;

@end
