@interface NSConcreteSetChange : NSSetChange {
    unsigned long long _changeType;
    id _value;
}

- (id)value;
- (id)initWithType:(unsigned long long)a0 object:(id)a1;
- (unsigned long long)changeType;
- (void)dealloc;

@end
