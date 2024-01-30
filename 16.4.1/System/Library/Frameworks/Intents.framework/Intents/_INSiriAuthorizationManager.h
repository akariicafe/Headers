@class NSString;

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_siriAuthorizationStatusForAppID:(id)a0;
+ (long long)_rawSiriAuthorizationStatusForAppID:(id)a0;
+ (void)_requestSiriAuthorization:(id /* block */)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (BOOL)_isSiriAuthorizationRestricted;
+ (BOOL)_siriEnabled;
+ (long long)_siriAuthorizationStatusForAppID:(id)a0 intentSlot:(id)a1;
+ (id)_tccAccessInfoForBundle:(id)a0;


@end
