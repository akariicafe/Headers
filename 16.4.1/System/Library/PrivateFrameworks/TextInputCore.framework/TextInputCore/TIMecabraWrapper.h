@interface TIMecabraWrapper : NSObject

@property (readonly) int inputMethodType;
@property (readonly) struct __Mecabra { } *mecabraRef;

- (void)dealloc;
- (id)initWithInputMethodType:(int)a0 learningDictionaryDirectoryURL:(struct __CFURL { } *)a1 creationOptions:(unsigned long long)a2;
- (id)initWithInputMethodType:(int)a0 learningDictionaryDirectoryURL:(id)a1 creationOptionsDictionary:(id)a2;

@end
