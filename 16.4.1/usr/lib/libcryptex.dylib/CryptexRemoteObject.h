@interface CryptexRemoteObject : NSObject

@property (readonly, nonatomic) char *identifier;
@property (readonly, nonatomic) char *version;

- (void)dealloc;
- (id)initWithDesc:(id)a0;

@end
