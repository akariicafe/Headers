@class NSString, NSNumber, NSDictionary;

@interface MCAPNConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *proxyServer;
@property (retain, nonatomic) NSNumber *proxyPort;
@property (retain, nonatomic) NSString *authenticationType;
@property (retain, nonatomic) NSNumber *defaultProtocolMask;
@property (retain, nonatomic) NSNumber *allowedProtocolMask;
@property (retain, nonatomic) NSNumber *allowedProtocolMaskInRoaming;
@property (retain, nonatomic) NSNumber *allowedProtocolMaskInDomesticRoaming;
@property (retain, nonatomic) NSNumber *enableXLAT464;
@property (readonly, nonatomic) NSDictionary *telephonyRepresentation;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 outError:(id *)a1;
- (id)localizedAuthenticationType;
- (id)stubDictionary;

@end
