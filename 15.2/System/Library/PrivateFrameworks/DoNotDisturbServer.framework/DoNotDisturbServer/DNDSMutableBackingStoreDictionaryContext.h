@protocol DNDSContactProviding, DNDSApplicationIdentifierMapping;

@interface DNDSMutableBackingStoreDictionaryContext : DNDSBackingStoreDictionaryContext

@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long partitionType;
@property (nonatomic) BOOL redactSensitiveData;
@property (retain, nonatomic) id<DNDSContactProviding> contactProvider;
@property (retain, nonatomic) id<DNDSApplicationIdentifierMapping> applicationIdentifierMapper;

- (void)setDestination:(unsigned long long)a0;
- (void)setContactProvider:(id)a0;
- (void)setPartitionType:(unsigned long long)a0;
- (void)setRedactSensitiveData:(BOOL)a0;
- (void)setApplicationIdentifierMapper:(id)a0;

@end
