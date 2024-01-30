@class NSSet, NSString;

@interface DMTDisallowedPayloadTypesValidator : NSObject <DMTConfigurationProfileValidator>

@property (copy, nonatomic) NSSet *disallowedPayloadTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)validateProfile:(id)a0 error:(id *)a1;

@end
