@class NSString;

@interface TransparencyAuditorReport : NSObject

@property long long auditorId;
@property (readonly) NSString *auditorName;

- (void)getReportForUUID:(id)a0 completionBlock:(id /* block */)a1;
- (void)getReportsForUUIDs:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithAuditorId:(long long)a0;
- (void)makeReport:(id)a0 additionalData:(id)a1 completionBlock:(id /* block */)a2;
- (void)makeReports:(id)a0 additionalData:(id)a1 completionBlock:(id /* block */)a2;

@end
