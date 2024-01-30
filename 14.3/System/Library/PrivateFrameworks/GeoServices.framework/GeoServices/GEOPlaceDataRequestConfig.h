@class NSNumber;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {
    double _timeout;
    unsigned long long _urlType;
    NSNumber *_requestPriority;
    unsigned long long _multipathServiceType;
}

- (double)timeout;
- (void).cxx_destruct;
- (id)additionalHTTPHeaders;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (unsigned long long)multipathServiceType;
- (id)initWithTimeout:(double)a0 request:(id)a1 traits:(id)a2;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;

@end
