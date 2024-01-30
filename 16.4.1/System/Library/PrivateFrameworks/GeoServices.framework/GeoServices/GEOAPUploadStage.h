@class GEOAPURLSessionConfig;

@interface GEOAPUploadStage : NSObject

@property (readonly, nonatomic) GEOAPURLSessionConfig *urlSessionConfig;
@property (readonly, nonatomic) double ttl;

- (id)initWithURLSessionConfig:(id)a0 ttl:(double)a1;
- (void).cxx_destruct;

@end
