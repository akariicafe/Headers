@class NSString, NSValue;

@interface _UIViewPropertyAnimationUpdate : NSObject

@property (readonly, nonatomic, getter=isImplicit) BOOL implicit;
@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic, getter=isAdditive) BOOL additive;
@property (retain, nonatomic) NSValue *fromValue;
@property (retain, nonatomic) NSValue *toValue;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) double delay;

- (id)initWithPropertyName:(id)a0 implicit:(BOOL)a1 additive:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
