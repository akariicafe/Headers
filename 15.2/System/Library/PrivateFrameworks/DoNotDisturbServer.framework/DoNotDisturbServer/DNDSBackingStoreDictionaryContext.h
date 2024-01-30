@protocol DNDSContactProviding, DNDSApplicationIdentifierMapping;

@interface DNDSBackingStoreDictionaryContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic) unsigned long long partitionType;
@property (readonly, nonatomic) BOOL redactSensitiveData;
@property (readonly, nonatomic) id<DNDSContactProviding> contactProvider;
@property (readonly, nonatomic) id<DNDSApplicationIdentifierMapping> applicationIdentifierMapper;

- (id)_initWithContext:(id)a0;
- (id)initWithDestination:(unsigned long long)a0 partitionType:(unsigned long long)a1 redactSensitiveData:(BOOL)a2 contactProvider:(id)a3 applicationIdentifierMapper:(id)a4;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
