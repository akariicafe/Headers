@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)objectAtIndex:(unsigned long long)a0;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)mutableCopy;
- (id)retain;
- (id)description;
- (BOOL)_isDeallocating;
- (id)init;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (const id *)_values;
- (id)copy;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
