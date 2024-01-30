@class NSString;

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *libraryPath;
@property (nonatomic) int sourceType;
@property (nonatomic) unsigned long long operationCount;
@property (nonatomic) BOOL allowAccountMerging;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
