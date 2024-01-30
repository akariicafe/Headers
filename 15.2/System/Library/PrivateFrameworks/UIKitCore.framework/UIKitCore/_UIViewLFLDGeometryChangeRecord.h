@class NSString, NSValue, UIView;

@interface _UIViewLFLDGeometryChangeRecord : _UIViewLFLDChangeRecord

@property (readonly, nonatomic) NSString *geometricPropertyName;
@property (readonly, nonatomic) NSValue *geometricPropertyValue;
@property (readonly, nonatomic) UIView *currentLayoutView;
@property (readonly, nonatomic) NSString *currentLayoutMethodName;

- (id)initWithGeometricPropertyName:(id)a0 value:(id)a1 currentLayoutView:(id)a2 methodName:(id)a3;
- (id)description;
- (void).cxx_destruct;

@end
