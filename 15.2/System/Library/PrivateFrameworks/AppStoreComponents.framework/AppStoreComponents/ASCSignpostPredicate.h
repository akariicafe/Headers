@class NSSet, NSArray;

@interface ASCSignpostPredicate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, copy, nonatomic) NSArray *dateRanges;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSpans:(id)a0;
- (id)initWithTags:(id)a0 dateRanges:(id)a1;
- (id)predicateByAddingTag:(unsigned long long)a0;
- (id)predicateByAddingDateRange:(id)a0;

@end
