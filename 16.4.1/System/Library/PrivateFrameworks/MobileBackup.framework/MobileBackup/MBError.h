@interface MBError : NSObject

+ (id)errorWithDomain:(id)a0 code:(long long)a1 path:(id)a2 format:(id)a3;
+ (id)errorWithCode:(long long)a0 format:(id)a1;
+ (id)sanitizedError:(id)a0;
+ (BOOL)isError:(id)a0 withCode:(long long)a1;
+ (id)errorWithCode:(long long)a0 URL:(id)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 path:(id)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 error:(id)a1 path:(id)a2 format:(id)a3;
+ (id)descriptionForError:(id)a0 paths:(BOOL)a1;
+ (id)errorWithCode:(long long)a0 error:(id)a1 format:(id)a2;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 error:(id)a1 URL:(id)a2 format:(id)a3;
+ (id)descriptionForError:(id)a0;
+ (BOOL)isError:(id)a0 withCodes:(long long)a1;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (BOOL)isTransientError:(id)a0;
+ (int)codeForNSError:(id)a0;
+ (id)posixErrorWithCode:(long long)a0 path:(id)a1 format:(id)a2;
+ (int)codeForErrno:(int)a0;
+ (id)dictionaryRepresentationForError:(id)a0;
+ (int)errnoForError:(id)a0;
+ (id)errorForHTTPURLResponse:(id)a0 error:(id)a1;
+ (id)errorForNSError:(id)a0 path:(id)a1 format:(id)a2;
+ (id)errorWithDictionaryRepresentation:(id)a0;
+ (id)errorWithErrno:(int)a0 code:(long long)a1 path:(id)a2 format:(id)a3;
+ (id)errorWithErrno:(int)a0 code:(long long)a1 path:(id)a2 format:(id)a3 arguments:(char *)a4;
+ (id)errorWithErrno:(int)a0 format:(id)a1;
+ (id)errorWithErrno:(int)a0 path:(id)a1 format:(id)a2;
+ (id)errorWithErrors:(id)a0;
+ (id)formatErrors:(id)a0 descriptionSelector:(SEL)a1;
+ (BOOL)isCancelledError:(id)a0;
+ (BOOL)isCancelledXPCActivityDeferredError:(id)a0;
+ (BOOL)isNSError:(id)a0 withCode:(long long)a1;
+ (BOOL)isRetryAfterError:(id)a0 retryAfterDate:(id *)a1;
+ (BOOL)isUnexpectedErrorCode:(long long)a0;
+ (id)loggableDescriptionForError:(id)a0;
+ (id)posixErrorWithCode:(long long)a0 format:(id)a1;
+ (id)posixErrorWithFormat:(id)a0;
+ (id)posixErrorWithPath:(id)a0 format:(id)a1;

@end
