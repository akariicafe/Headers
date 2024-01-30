@interface PKWebServiceContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)contextWithArchive:(id)a0;
+ (id)contextWithArchive:(id)a0 error:(id *)a1;

- (BOOL)archiveAtPath:(id)a0 error:(id *)a1;
- (void)archiveAtPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
