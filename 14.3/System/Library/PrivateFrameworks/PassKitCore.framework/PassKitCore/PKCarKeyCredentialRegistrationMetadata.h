@class NSString;

@interface PKCarKeyCredentialRegistrationMetadata : PKCredentialRegistrationMetadata

@property (readonly, nonatomic) NSString *make;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) long long keyType;

- (void).cxx_destruct;
- (id)initWithMake:(id)a0 model:(id)a1 keyType:(long long)a2;

@end
