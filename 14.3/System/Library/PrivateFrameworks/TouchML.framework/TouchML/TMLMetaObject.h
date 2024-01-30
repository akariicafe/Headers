@class NSSet, NSString, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSMutableArray, TMLValueExpression;

@interface TMLMetaObject : NSObject <TMLModelSerialize>

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSMutableDictionary *properties;
@property (readonly, nonatomic) NSMutableOrderedSet *propertyKeys;
@property (readonly, nonatomic) NSMutableDictionary *signalHandlers;
@property (readonly, nonatomic) NSMutableArray *declarations;
@property (readonly, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) TMLValueExpression *initializer;
@property (readonly, nonatomic) NSMutableSet *implements;
@property (readonly, nonatomic) NSSet *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 attributes:(id)a1;
- (void)addObject:(id)a0;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
- (void)addDeclaration:(id)a0;
- (void)addProperty:(id)a0 value:(id)a1;
- (void)addPropertyDeclaration:(id)a0 typeName:(id)a1 attributes:(id)a2;
- (id)signalDeclaration:(id)a0;
- (void)addSignalHandler:(id)a0 signalTarget:(id)a1;
- (void)addImplements:(id)a0;
- (void)addSignalDeclaration:(id)a0 returnType:(id)a1 parameters:(id)a2 methodSelector:(id)a3 attributes:(id)a4;
- (void)addMethodDeclaration:(id)a0 returnType:(id)a1 parameters:(id)a2 methodSelector:(id)a3 attributes:(id)a4;
- (void)addConstructorDeclaration:(id)a0 parameters:(id)a1 methodSelector:(id)a2;
- (void)applyCategory:(id)a0;
- (id)propertyDeclaration:(id)a0;

@end
