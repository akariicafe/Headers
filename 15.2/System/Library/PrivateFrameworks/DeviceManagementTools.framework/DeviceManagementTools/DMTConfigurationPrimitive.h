@class NSString, NSDictionary;

@interface DMTConfigurationPrimitive : NSObject <DMTConfigurationProfilePayload>

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSDictionary *rawDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
