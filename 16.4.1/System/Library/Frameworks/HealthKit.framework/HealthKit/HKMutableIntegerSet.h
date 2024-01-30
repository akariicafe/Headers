@interface HKMutableIntegerSet : HKIntegerSet <NSSecureCoding, NSCopying> {
    BOOL _enumerating;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCapacity:(unsigned long long)a0;
- (void)addInteger:(long long)a0;
- (void)enumerateIntegersUsingBlock:(id /* block */)a0;
- (void)removeInteger:(long long)a0;

@end
