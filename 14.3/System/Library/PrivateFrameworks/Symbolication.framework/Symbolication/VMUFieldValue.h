@class VMUFieldInfo;

@interface VMUFieldValue : NSObject {
    VMUFieldInfo *_field;
    unsigned long long _value;
}

@property (readonly, nonatomic) VMUFieldInfo *field;
@property (readonly, nonatomic) unsigned long long value;

- (void).cxx_destruct;
- (id)initWithField:(id)a0 value:(unsigned long long)a1;

@end
