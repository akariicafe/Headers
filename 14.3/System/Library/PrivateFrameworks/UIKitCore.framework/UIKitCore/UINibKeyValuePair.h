@class NSString;

@interface UINibKeyValuePair : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (void)apply;
- (void)applyForSimulator;
- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0 keyPath:(id)a1 value:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
