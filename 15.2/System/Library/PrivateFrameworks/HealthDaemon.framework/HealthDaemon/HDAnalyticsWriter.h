@class NSString, HDProfile;

@interface HDAnalyticsWriter : NSObject {
    HDProfile *_profile;
    struct __SecCertificate { } *_certificate;
    NSString *_analyticsDirectory;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)submitJSONAnalyticsData:(id)a0 bugType:(id)a1 error:(id *)a2;
- (BOOL)submitJSONAnalyticsData:(id)a0 toDirectory:(id)a1 withConfiguration:(id)a2 error:(id *)a3;
- (id)URLForAnalyticsFileWithName:(id)a0;
- (id)analyticsFilePathsWithError:(id *)a0;

@end
