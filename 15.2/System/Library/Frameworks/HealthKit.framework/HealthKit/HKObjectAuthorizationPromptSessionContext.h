@class NSArray, HKObjectAuthorizationPromptSessionMetadata;

@interface HKObjectAuthorizationPromptSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *samplesRequiringAuthorization;
@property (readonly, copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSamplesRequiringAuthorization:(id)a0 metadata:(id)a1;
- (id)initWithCoder:(id)a0;

@end
