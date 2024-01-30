@class NSString;

@interface HDAnalyticsWriter : NSObject {
    struct __SecCertificate { } *_certificate;
    NSString *_analyticsDirectory;
}

- (id)initWithURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)URLForAnalyticsFileWithName:(id)a0;
- (id)analyticsFilePathsWithError:(id *)a0;
- (BOOL)submitJSONAnalyticsData:(id)a0 bugType:(id)a1 error:(id *)a2;
- (BOOL)submitJSONAnalyticsData:(id)a0 toDirectory:(id)a1 withConfiguration:(id)a2 error:(id *)a3;

@end
