@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (id)retain;
- (id)initForKeys:(id)a0;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)init;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (unsigned long long)retainCount;

@end
