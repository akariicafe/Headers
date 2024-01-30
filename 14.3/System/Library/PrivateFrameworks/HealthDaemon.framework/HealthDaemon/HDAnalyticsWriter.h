@class NSString, HDProfile;

@interface HDAnalyticsWriter : NSObject {
    HDProfile *_profile;
    struct __SecCertificate { } *_certificate;
    NSString *_analyticsDirectory;
}

+ (id)_payloadIdentifierForBugType:(id)a0;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_submitJSONAnalyticsData:(id)a0 bugType:(id)a1 customDirectory:(id)a2 configuration:(id)a3 error:(id *)a4;
- (BOOL)_cleanAnalyticsDirectory:(id)a0 error:(id *)a1;
- (BOOL)_createAndCleanAnalyticsDirectoryWithError:(id *)a0;
- (id)_serializeAnalyticsData:(id)a0 errorOut:(id *)a1;
- (BOOL)_loadCertificateWithError:(id *)a0;
- (id)_encryptAnalyticsData:(id)a0 withConfig:(id)a1 error:(id *)a2;
- (BOOL)_createAnalyticsDirectory:(id)a0 error:(id *)a1;
- (BOOL)submitJSONAnalyticsData:(id)a0 bugType:(id)a1 error:(id *)a2;
- (BOOL)submitJSONAnalyticsData:(id)a0 toDirectory:(id)a1 withConfiguration:(id)a2 error:(id *)a3;
- (id)URLForAnalyticsFileWithName:(id)a0;
- (id)analyticsFilePathsWithError:(id *)a0;

@end
