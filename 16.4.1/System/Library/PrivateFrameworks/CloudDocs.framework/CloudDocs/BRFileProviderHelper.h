@interface BRFileProviderHelper : NSObject

+ (id)_br_getDomainIdentifierForACAccountID:(id)a0 withDataSeparated:(BOOL)a1;
+ (id)br_getDomainIdentifierForACAccountID:(id)a0;
+ (id)br_getDomainIdentifierForCurrentPersona;
+ (id)br_getDomainIdentifierForDataSeparated:(BOOL)a0;
+ (id)br_getProviderDomainIDForCurrentPersona;
+ (id)br_getProviderDomainIDForDataSeparated:(BOOL)a0;
+ (id)br_getProviderIDForCurrentPersona;
+ (id)br_getProviderIDForDataSeparated:(BOOL)a0;

@end
