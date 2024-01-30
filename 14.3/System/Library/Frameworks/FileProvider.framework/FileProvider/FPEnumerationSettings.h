@class NSArray, NSFileProviderSearchQuery;

@interface FPEnumerationSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *sortDescriptors;
@property (copy) NSFileProviderSearchQuery *searchQuery;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
