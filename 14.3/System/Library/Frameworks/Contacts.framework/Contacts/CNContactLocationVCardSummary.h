@class NSString;

@interface CNContactLocationVCardSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *descriptiveLabel;
@property (readonly, copy, nonatomic) NSString *urlString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 URLString:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
