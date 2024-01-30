@class NSString, NSArray, NSDictionary, BCError;

@interface BCInternalAuthenticationResponse : NSObject <BCDictionarySerializable> {
    NSString *_status;
    NSString *_businessIdentifier;
    NSString *_groupIdentifier;
    NSString *_credentials;
    NSArray *_errors;
}

@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *businessIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *credentials;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) BCError *error;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithBusinessIdentifier:(id)a0 groupIdentifier:(id)a1 credentials:(id)a2 error:(id)a3;
- (id)responseMessageFor:(id)a0 message:(id)a1;

@end
