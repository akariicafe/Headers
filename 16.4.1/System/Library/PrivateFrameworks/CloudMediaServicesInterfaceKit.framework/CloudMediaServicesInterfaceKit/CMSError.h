@interface CMSError : NSObject

+ (id)_descriptionForErrorCode:(long long)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 description:(id)a2;
+ (id)errorWithDomain:(id)a0 code:(long long)a1;

@end
