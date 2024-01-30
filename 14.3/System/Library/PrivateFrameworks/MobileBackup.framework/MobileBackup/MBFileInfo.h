@class NSString, NSDictionary;

@interface MBFileInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL isDirectory;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *extendedAttributes;

+ (id)fileInfoWithPath:(id)a0 extendedAttributes:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPath:(id)a0 extendedAttributes:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
