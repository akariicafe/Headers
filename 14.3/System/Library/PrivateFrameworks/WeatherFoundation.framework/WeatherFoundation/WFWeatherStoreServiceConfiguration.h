@class NSURLSession, NSString, NWPathEvaluator, NSURL, WFSettingsManager;

@interface WFWeatherStoreServiceConfiguration : NSObject <NSURLSessionTaskDelegate, NSCopying>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } serviceConnectivityEvaluationURLLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } serviceConnectivityEvaluatorLock;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) Class cacheClass;
@property (retain, nonatomic) NSURL *serviceConnectivityEvaluationURL;
@property (retain, nonatomic) WFSettingsManager *settingsManager;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSString *apiVersion;
@property (copy, nonatomic) NSURL *cacheURL;
@property (readonly, nonatomic) NWPathEvaluator *serviceConnectivityEvaluator;
@property (readonly, nonatomic) BOOL isServiceAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfigurationWithSourceBundleIdentifier:(id)a0;
+ (id)defaultConfiguration;
+ (id)generateUserAgent;

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)apiConfigurationForAPIVersion:(id)a0;
- (id)forecastRequestForTypes:(unsigned long long)a0 location:(id)a1 date:(id)a2 apiVersion:(id)a3 error:(id *)a4;
- (id)init;
- (void).cxx_destruct;
- (id)apiConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)parseForecast:(unsigned long long)a0 data:(id)a1 location:(id)a2 units:(int)a3 locale:(id)a4 date:(id)a5 error:(id *)a6;
- (BOOL)isServiceAvailableSync;
- (id)forecastRequestForTypes:(unsigned long long)a0 location:(id)a1 units:(int)a2 date:(id)a3 apiVersion:(id)a4 error:(id *)a5 requestOptions:(id)a6;
- (id)forecastRequestForTypes:(unsigned long long)a0 location:(id)a1 date:(id)a2 error:(id *)a3;
- (id)parseForecast:(unsigned long long)a0 data:(id)a1 location:(id)a2 units:(int)a3 locale:(id)a4 date:(id)a5 apiVersion:(id)a6 error:(id *)a7;
- (id)forecastRequestForTypes:(unsigned long long)a0 location:(id)a1 units:(int)a2 date:(id)a3 apiVersion:(id)a4 error:(id *)a5;
- (id)aqiScaleRequestForScaleNamed:(id)a0 language:(id)a1 error:(id *)a2;
- (id)parseAQIScaleNamed:(id)a0 data:(id)a1 apiVersion:(id)a2 error:(id *)a3;
- (void)invalidate;

@end
