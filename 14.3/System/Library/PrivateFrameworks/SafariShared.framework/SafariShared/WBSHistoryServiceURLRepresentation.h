@class NSString, NSData;

@interface WBSHistoryServiceURLRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSData *urlHash;
@property (readonly, copy, nonatomic) NSData *urlSalt;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURLHash:(id)a0 salt:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithURLString:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
