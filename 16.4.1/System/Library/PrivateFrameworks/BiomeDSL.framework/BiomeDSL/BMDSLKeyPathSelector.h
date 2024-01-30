@class NSArray;

@interface BMDSLKeyPathSelector : BMDSLBaseCodable <BMDSLArgumentSelector>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *keyPaths;

+ (id)withKeyPaths:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)argumentsFromInput:(id)a0 combinedState:(id)a1;
- (id)initWithName:(id)a0 version:(unsigned int)a1 keyPaths:(id)a2;
- (id)initWithKeyPaths:(id)a0;
- (void).cxx_destruct;

@end
