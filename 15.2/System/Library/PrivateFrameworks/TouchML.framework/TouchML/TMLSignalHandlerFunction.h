@class NSString;

@interface TMLSignalHandlerFunction : TMLFunction <TMLModelSerialize>

@property (readonly, nonatomic) NSString *signalName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;

- (void).cxx_destruct;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
- (id)initWithSignalName:(id)a0 functionName:(id)a1 body:(id)a2;

@end
