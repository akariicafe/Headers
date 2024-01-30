@class NSString, NSData;

@interface HMReportContext : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) double reportTimeout;
@property (readonly, nonatomic) NSString *reportDomain;
@property (readonly, nonatomic) NSData *requestInfo;

+ (id)reportContextWithDomain:(id)a0 requestInfo:(id)a1 timeout:(double)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReportDomain:(id)a0 requestInfo:(id)a1 timeout:(double)a2;

@end
