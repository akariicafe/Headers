@interface ENError : NSObject

+ (id)connectionFailedError;
+ (id)noteSizeLimitReachedError;
+ (id)errorFromException:(id)a0;
+ (long long)sanitizedErrorCodeFromEDAMErrorCode:(int)a0;
+ (id)localizedDescriptionForENErrorCode:(long long)a0;

@end
