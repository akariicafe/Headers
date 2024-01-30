@class NSString, NSMutableDictionary, NSDictionary, TMLValueExpression;

@interface TMLClassDescriptor : NSObject <TMLModelSerialize>

@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) NSString *superClassName;
@property (retain, nonatomic) TMLClassDescriptor *superClass;
@property (readonly, nonatomic) NSMutableDictionary *properties;
@property (readonly, nonatomic) NSMutableDictionary *signals;
@property (readonly, nonatomic) NSMutableDictionary *methods;
@property (readonly, nonatomic) NSMutableDictionary *childClasses;
@property (readonly, nonatomic) Class objcClass;
@property (copy, nonatomic) NSString *objcClassName;
@property (readonly, nonatomic) TMLValueExpression *initializer;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly, nonatomic) NSDictionary *inheritedProperties;
@property (readonly, nonatomic) NSDictionary *inheritedSignals;
@property (readonly, nonatomic) NSDictionary *inheritedMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;

- (id)propertyForName:(id)a0;
- (void).cxx_destruct;
- (void)addMethod:(id)a0;
- (void)addProperty:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
- (void)addSignal:(id)a0;
- (id)initWithName:(id)a0 superClassName:(id)a1 initializer:(id)a2 optional:(BOOL)a3;
- (BOOL)canMergeFromClassDescriptor:(id)a0;
- (BOOL)mergeFromClassDescriptor:(id)a0;
- (void)addChildClass:(id)a0;

@end
