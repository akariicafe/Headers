@class NSString;

@interface PKCarKeyCredentialRegistrationMetadata : PKCredentialRegistrationMetadata

@property (readonly, nonatomic) NSString *make;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) long long keyType;

- (id)initWithMake:(id)a0 model:(id)a1 keyType:(long long)a2;
- (void).cxx_destruct;

@end
