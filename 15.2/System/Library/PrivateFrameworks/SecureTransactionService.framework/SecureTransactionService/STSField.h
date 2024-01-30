@interface STSField : NSObject

@property (readonly) unsigned long long fieldType;
@property (readonly) unsigned long long terminalType;
@property (readonly) BOOL odaRequired;

- (void)setFieldType:(unsigned long long)a0;
- (void)setTerminalType:(unsigned long long)a0;
- (void)setODARequired:(BOOL)a0;

@end
