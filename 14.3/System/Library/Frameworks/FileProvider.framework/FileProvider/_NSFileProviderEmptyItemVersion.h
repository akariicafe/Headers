@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (BOOL)supportsSecureCoding;
+ (id)emptyVersion;

- (id)init;
- (id)contentVersion;
- (id)initWithCoder:(id)a0;
- (id)metadataVersion;

@end
