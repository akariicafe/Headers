@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_items;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long count;

- (id)firstValueBeforeOrEqualToTimestamp:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)a0;
- (void)removeAllValues;
- (id)firstValueBeforeTimestamp:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addValue:(id)a0 timestamp:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)lastValueAndTimestamp:(unsigned long long *)a0;
- (void)removeValuesBeforeTimestamp:(unsigned long long)a0;
- (id)lastValue;
- (void)addValuesFromHistory:(id)a0;
- (void).cxx_destruct;

@end
