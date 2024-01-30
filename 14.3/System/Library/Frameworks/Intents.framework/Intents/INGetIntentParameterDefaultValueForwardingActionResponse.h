@class NSData;

@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSData *archivedDefaultValue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithArchivedDefaultValue:(id)a0 error:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
