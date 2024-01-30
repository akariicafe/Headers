@class NSArray, NSDictionary, NSString;

@interface DMTConfigurationProfile : DMTConfigurationPrimitive <DMTConfigurationProfilePayload>

@property (readonly, nonatomic) NSArray *payloads;
@property (readonly, nonatomic) NSDictionary *payloadsByType;
@property (readonly, nonatomic) NSDictionary *payloadsByUUID;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSDictionary *rawDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationProfileWithData:(id)a0 error:(id *)a1;
+ (id)configurationProfileWithDictionary:(id)a0 error:(id *)a1;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)payloadsOfType:(id)a0;
- (id)payloadsOfTypes:(id)a0;
- (BOOL)validateWithValidators:(id)a0 error:(id *)a1;

@end
