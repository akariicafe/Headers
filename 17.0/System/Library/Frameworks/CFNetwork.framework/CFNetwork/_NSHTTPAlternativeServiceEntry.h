@class NSString, NSDate;

@interface _NSHTTPAlternativeServiceEntry : NSObject <NSCopying>

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *alternateHost;
@property (nonatomic) long long port;
@property (nonatomic) long long alternatePort;
@property (retain, nonatomic) NSString *partition;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long serviceType;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
