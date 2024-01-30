@class NSData;

@interface INGetIntentParameterOptionsForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSData *archivedObjectCollection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchivedObjectCollection:(id)a0 error:(id)a1;
- (id)initWithCoder:(id)a0;

@end
