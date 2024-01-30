@class DMFBook;

@interface DMFInstallManagedBookResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) DMFBook *book;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithBook:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
