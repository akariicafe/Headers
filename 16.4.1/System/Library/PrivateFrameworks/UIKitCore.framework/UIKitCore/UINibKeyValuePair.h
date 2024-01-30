@class NSString;

@interface UINibKeyValuePair : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)apply;
- (void).cxx_destruct;
- (void)applyForSimulator;
- (id)initWithObject:(id)a0 keyPath:(id)a1 value:(id)a2;

@end
