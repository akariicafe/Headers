@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding> {
    int[41] *_matrix;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long sourceCount;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceCount:(unsigned long long)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (void)setPass:(BOOL)a0 element:(long long)a1 forSourceAtIndex:(unsigned long long)a2;
- (BOOL)shouldPassElement:(long long)a0 forSourceAtIndex:(unsigned long long)a1;
- (void)enumeratePassedElementsForSourceAtIndex:(unsigned long long)a0 withBlock:(id /* block */)a1;

@end
