@class NSData, AWDNFCMiddlewareExceptionEvent, NSString;

@interface NFAWDMiddlewareException : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int hardwareType;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int errorCode;
@property (retain, nonatomic) NSData *breadcrumb;
@property (retain, nonatomic) AWDNFCMiddlewareExceptionEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateExceptionUUID:(id)a0;

@end
