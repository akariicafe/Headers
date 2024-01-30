@interface _PSIMCoreUtils : NSObject

+ (id)chatWithGUID:(id)a0;
+ (id)recipientsForChat:(id)a0 usingStore:(id)a1;
+ (id)contactKeysToFetch;
+ (id)filterNamedGroupsOrIndividualChatsFromInteractions:(id)a0 registry:(id)a1;
+ (BOOL)contactIsMe:(id)a0 usingStore:(id)a1;

@end
