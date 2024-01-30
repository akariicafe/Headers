@class NSString;

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_siriEnabled;
+ (void)_requestSiriAuthorization:(id /* block */)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (id)_tccAccessInfoForBundle:(id)a0;
+ (BOOL)_isSiriAuthorizationRestricted;
+ (long long)_siriAuthorizationStatusForAppID:(id)a0;
+ (long long)_rawSiriAuthorizationStatusForAppID:(id)a0;


@end
