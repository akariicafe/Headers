@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *subtype;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL isFile;

- (id)init;
- (id)initWithType:(id)a0 isFile:(BOOL)a1;
- (id)initWithType:(id)a0 subtype:(id)a1 isFile:(BOOL)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)incrementCount;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
