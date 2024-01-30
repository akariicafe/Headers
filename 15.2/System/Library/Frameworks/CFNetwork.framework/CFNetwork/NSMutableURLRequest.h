@class NSString, NSDictionary, NSData, NSURL, NSInputStream;

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSString *HTTPMethod;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property BOOL HTTPShouldHandleCookies;
@property BOOL HTTPShouldUsePipelining;
@property (copy) NSURL *URL;
@property unsigned long long cachePolicy;
@property double timeoutInterval;
@property (copy) NSURL *mainDocumentURL;
@property unsigned long long networkServiceType;
@property BOOL allowsCellularAccess;
@property BOOL allowsExpensiveNetworkAccess;
@property BOOL allowsConstrainedNetworkAccess;
@property BOOL assumesHTTP3Capable;
@property unsigned long long attribution;

- (void)setAllowsExpensiveNetworkAccess:(BOOL)a0;
- (void)setCachePolicy:(unsigned long long)a0;
- (void)setNetworkServiceType:(unsigned long long)a0;
- (void)setTimeoutInterval:(double)a0;
- (void)setContentDispositionEncodingFallbackArray:(id)a0;
- (void)setAllowsConstrainedNetworkAccess:(BOOL)a0;
- (void)_setNeedsNetworkTrackingPrevention:(BOOL)a0;
- (void)_setRequiresShortConnectionTimeout:(BOOL)a0;
- (void)_setPayloadTransmissionTimeout:(double)a0;
- (unsigned long long)requestPriority;
- (void)_setIgnoreHSTS:(BOOL)a0;
- (void)_setKnownTracker:(BOOL)a0;
- (void)setHTTPUserAgent:(id)a0;
- (void)setHTTPReferrer:(id)a0;
- (void)addValue:(id)a0 forHTTPHeaderField:(id)a1;
- (void)set_trackerContext:(id)a0;
- (void)_setNonAppInitiated:(BOOL)a0;
- (void)setHTTPExtraCookies:(id)a0;
- (void)setExpectedWorkload:(unsigned long long)a0;
- (void)_setTimeWindowDelay:(double)a0;
- (void)setAllowsCellularAccess:(BOOL)a0;
- (void)setHTTPContentType:(id)a0;
- (void)setRequestPriority:(unsigned long long)a0;
- (void)_setStartTimeoutDate:(id)a0;
- (void)_setPrivacyProxyFailClosed:(BOOL)a0;
- (void)_removeAllProtocolProperties;
- (void)setAssumesHTTP3Capable:(BOOL)a0;
- (void)_setTimeWindowDuration:(double)a0;
- (void)_setPreventHSTSStorage:(BOOL)a0;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (void)setURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBoundInterfaceIdentifier:(id)a0;
- (void)setMainDocumentURL:(id)a0;
- (void)setAttribution:(unsigned long long)a0;

@end
