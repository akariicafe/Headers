@class NSString;

@interface SODNSSRVResponse : NSObject

@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
