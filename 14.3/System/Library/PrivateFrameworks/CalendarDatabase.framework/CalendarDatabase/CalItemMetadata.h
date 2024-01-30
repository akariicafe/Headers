@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *x_props;
@property int classification;

+ (id)metadataWithData:(id)a0;
+ (id)metadataWithICSComponent:(id)a0;
+ (id)_whitelistedClassesForSecureCoding;

- (id)init;
- (void)applyToComponent:(id)a0;
- (id)dataRepresentationWithExistingMetaData:(id)a0;
- (void).cxx_destruct;
- (id)initWithICSComponent:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
