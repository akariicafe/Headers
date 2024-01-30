@interface TMLModelSerialize : NSObject

+ (id)decode:(id)a0;
+ (id)verifySignature:(id)a0;
+ (id)decodeZ85:(id)a0;
+ (id)pack:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
+ (struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)unpackData:(id)a0 withDescriptor:(const struct ProtobufCMessageDescriptor { unsigned int x0; char *x1; char *x2; char *x3; char *x4; unsigned long long x5; unsigned int x6; struct ProtobufCFieldDescriptor *x7; unsigned int *x8; unsigned int x9; struct ProtobufCIntRange *x10; void /* function */ *x11; void *x12; void *x13; void *x14; } *)a1;

@end
