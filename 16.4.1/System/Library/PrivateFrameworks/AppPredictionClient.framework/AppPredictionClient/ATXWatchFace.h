@class NSArray;

@interface ATXWatchFace : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 complications:(id)a1 selected:(BOOL)a2;
- (BOOL)isEqualToATXWatchFace:(id)a0;

@end
