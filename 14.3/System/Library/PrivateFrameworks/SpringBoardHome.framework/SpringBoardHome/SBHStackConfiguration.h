@class NSArray;

@interface SBHStackConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsSuggestions;
@property (nonatomic) BOOL allowsExternalSuggestions;
@property (copy, nonatomic) NSArray *dataSources;
@property (nonatomic) unsigned long long sizeClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
