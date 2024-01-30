@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (BOOL)supportsSecureCoding;
+ (id)emptyVersion;

- (id)metadataVersion;
- (id)contentVersion;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
