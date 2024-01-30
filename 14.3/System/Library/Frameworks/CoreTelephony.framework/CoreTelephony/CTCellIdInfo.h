@class NSNumber;

@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *cellId;
@property (readonly, nonatomic) NSNumber *baseId;

+ (id)cellIdInfoFromCellId:(int)a0 baseId:(int)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
