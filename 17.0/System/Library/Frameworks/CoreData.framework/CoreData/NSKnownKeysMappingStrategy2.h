@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (id)initForKeys:(id)a0;
- (oneway void)release;

@end
