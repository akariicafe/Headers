@class NSString, BSObjCProtocol;

@interface BSMutableServiceInterface : BSServiceInterface

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long clientMessagingExpectation;
@property (copy, nonatomic) BSObjCProtocol *server;
@property (copy, nonatomic) BSObjCProtocol *client;

+ (id)interfaceWithIdentifier:(id)a0;

- (void)setClient:(id)a0;
- (void)setServer:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setClientMessagingExpectation:(long long)a0;
- (void)setIdentifier:(id)a0;

@end
