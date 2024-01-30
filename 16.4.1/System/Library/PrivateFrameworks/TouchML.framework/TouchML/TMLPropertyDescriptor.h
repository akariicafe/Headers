@class NSString;

@interface TMLPropertyDescriptor : NSObject <TMLModelSerialize> {
    NSString *_propertyType;
}

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *typeClassName;
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)canMergeFromPropertyDescriptor:(id)a0;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 attributes:(id)a2;
- (id)initWithName:(id)a0 typeName:(id)a1 attributes:(id)a2;

@end
