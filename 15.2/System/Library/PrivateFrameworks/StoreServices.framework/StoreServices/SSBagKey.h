@class NSArray;
@protocol NSObject;

@interface SSBagKey : NSObject

@property (readonly, nonatomic) id<NSObject> defaultValue;
@property (readonly, nonatomic) NSArray *stringRepresentation;
@property (readonly, nonatomic) unsigned long long valueType;

- (id)initWithStringRepresentation:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;
- (void).cxx_destruct;
- (id)valueFromDictionary:(id)a0;
- (id)initWithStringRepresentation:(id)a0 valueType:(unsigned long long)a1;

@end
