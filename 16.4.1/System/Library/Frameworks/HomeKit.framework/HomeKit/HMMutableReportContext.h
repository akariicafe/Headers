@class NSString, NSData;

@interface HMMutableReportContext : HMReportContext

@property (retain, nonatomic) NSString *reportDomain;
@property (retain, nonatomic) NSData *requestInfo;
@property (nonatomic) double reportTimeout;

+ (id)reportContextWithDomain:(id)a0 requestInfo:(id)a1;
+ (id)reportContextWithDomain:(id)a0 requestInfo:(id)a1 timeout:(double)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReportDomain:(id)a0 requestInfo:(id)a1 timeout:(double)a2;

@end
