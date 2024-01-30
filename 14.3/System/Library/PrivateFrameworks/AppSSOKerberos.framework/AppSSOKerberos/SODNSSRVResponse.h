@class NSString;

@interface SODNSSRVResponse : NSObject

@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
