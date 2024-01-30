@class NSString, NSArray, NSDictionary, BCError;

@interface BCInternalAuthenticationResponse : NSObject <BCDictionaryImageSerializable>

@property (nonatomic) NSString *status;
@property (retain, nonatomic) NSString *businessIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *credentials;
@property (retain, nonatomic) NSArray *errors;
@property (readonly, nonatomic) BCError *error;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 imageDictionary:(id)a1;
- (id)initWithBusinessIdentifier:(id)a0 groupIdentifier:(id)a1 credentials:(id)a2 error:(id)a3;
- (id)responseMessageFor:(id)a0 message:(id)a1;

@end
