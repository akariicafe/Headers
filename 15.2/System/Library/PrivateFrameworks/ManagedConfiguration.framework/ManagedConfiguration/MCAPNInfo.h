@class NSString, NSNumber;

@interface MCAPNInfo : NSObject

@property (retain, nonatomic) NSString *apnName;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *proxy;
@property (retain, nonatomic) NSNumber *proxyPort;

- (id)description;
- (id)installationWarnings;
- (void).cxx_destruct;
- (id)defaultsRepresentation;
- (id)strippedDefaultsRepresentation;

@end
