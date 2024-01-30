@class NSString;

@interface _NSHTTPAlternativeServicesFilter : NSObject <NSCopying>

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *partition;
@property (nonatomic) long long port;

+ (id)emptyFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
