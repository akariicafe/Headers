@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (unsigned long long)retainCount;
- (id)retain;
- (id)initForKeys:(id)a0;
- (BOOL)_isDeallocating;
- (id)init;
- (void)dealloc;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;

@end
