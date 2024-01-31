@interface CNPRSPosterArchiver : NSObject

+ (id)archiveCNConfiguration:(id)a0 error:(out id *)a1;
+ (id)unarchiveCNConfigurationAtURL:(id)a0 error:(out id *)a1;
+ (id)unarchiveCNConfigurationFromData:(id)a0 error:(out id *)a1;

@end
