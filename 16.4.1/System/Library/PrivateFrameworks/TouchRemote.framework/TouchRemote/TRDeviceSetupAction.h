@class NSString, NSDictionary;

@interface TRDeviceSetupAction : NSObject

@property (readonly, copy, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) unsigned long long protocolVersion;

+ (id)actionWithActionType:(id)a0 parameters:(id)a1;
+ (id)actionWithData:(id)a0 error:(id *)a1 supportsLegacy:(BOOL)a2;

- (id)dataRepresentationWithError:(id *)a0;
- (id)propertyListRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithActionType:(id)a0 parameters:(id)a1;

@end
