@class NSString;

@interface _NSHTTPAlternativeServicesFilter : NSObject <NSCopying>

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *partition;
@property (nonatomic) long long port;

+ (id)emptyFilter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
