@class NSString;

@interface SASBoardServicesConfiguration : NSObject

@property (retain, nonatomic) NSString *machServiceIdentifier;
@property (retain, nonatomic) NSString *presentationDomain;
@property (retain, nonatomic) NSString *presentationIdentifier;
@property (retain, nonatomic) NSString *signalDomain;
@property (retain, nonatomic) NSString *signalIdentifier;

+ (id)configuration;
+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)domainForService:(long long)a0;
- (id)identifierForService:(long long)a0;

@end
