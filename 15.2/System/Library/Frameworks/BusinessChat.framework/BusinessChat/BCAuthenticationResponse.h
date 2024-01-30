@class NSString, NSArray, NSDictionary, BCError;

@interface BCAuthenticationResponse : NSObject <BCDictionarySerializable> {
    NSString *_status;
    NSString *_token;
    NSArray *_errors;
}

@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) BCError *error;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (id)initWithToken:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
