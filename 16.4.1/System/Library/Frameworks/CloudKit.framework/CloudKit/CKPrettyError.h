@interface CKPrettyError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 path:(id)a2 format:(id)a3;
+ (id)secureCodableError:(id)a0;
+ (id)errorWithCode:(long long)a0 format:(id)a1;
+ (id)sanitizedError:(id)a0;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1 format:(id)a2;
+ (BOOL)isError:(id)a0 withCode:(long long)a1;
+ (id)errorWithCode:(long long)a0 URL:(id)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 path:(id)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 error:(id)a1 path:(id)a2 format:(id)a3;
+ (id)_errorDomain;
+ (id)descriptionForError:(id)a0 paths:(BOOL)a1;
+ (id)errorWithCode:(long long)a0 error:(id)a1 format:(id)a2;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 error:(id)a1 URL:(id)a2 format:(id)a3;
+ (id)itemErrorFromError:(id)a0 forID:(id)a1;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1 error:(id)a2 format:(id)a3;
+ (id)descriptionForError:(id)a0;
+ (BOOL)isError:(id)a0 withCodes:(id)a1;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1 error:(id)a2 format:(id)a3 arguments:(char *)a4;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1 error:(id)a2 path:(id)a3 URL:(id)a4 description:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)CKPartialErrorDescription;
- (void)dealloc;
- (id)description;

@end
