@class NSNumber;

@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *cellId;
@property (readonly, nonatomic) NSNumber *baseId;

+ (id)cellIdInfoFromCellId:(unsigned long long)a0 baseId:(int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
