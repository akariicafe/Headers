@interface WeatherDaemon.WDSURLSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ taskContainsSensitiveData;
    void /* unknown type, empty encoding */ _taskMetrics;
}

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
