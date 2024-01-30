@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (BOOL)supportsSecureCoding;
+ (id)emptyVersion;

- (id)initWithCoder:(id)a0;
- (id)metadataVersion;
- (id)contentVersion;
- (id)init;

@end
