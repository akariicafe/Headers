@class NSString;

@interface SODNSSRVResponse : NSObject

@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
