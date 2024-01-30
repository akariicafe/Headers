@interface TIPathAction : TIUserAction

@property (readonly, nonatomic) unsigned long long syllableCount;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSyllableCount:(unsigned long long)a0 keyboardState:(id)a1;

@end
