@class NSString, NSMutableString;

@interface BSDescriptionStream : NSObject <BSDescriptionStringAppendTarget, BSDescriptionFormatting> {
    unsigned char _appendBuffer[1024];
    long long _appendBufferCount;
    NSMutableString *_string;
    long long _indentLevel;
    NSString *_pendingFieldTerminator;
    long long _emitPhase;
    long long _groupItemCount;
    long long _groupVerbosityOptions;
}

@property (nonatomic) BOOL sortKeys;
@property (nonatomic) BOOL verboseSingleItemCollections;

+ (id)descriptionForRootObject:(id)a0;

- (id)appendUInt64:(unsigned long long)a0 withName:(id)a1;
- (id)appendFloat:(double)a0 withName:(id)a1;
- (void)appendCustomFormatWithName:(id)a0 block:(id /* block */)a1;
- (id)appendFlag:(long long)a0 withName:(id)a1;
- (void)appendDictionary:(id)a0 withName:(id)a1 itemBlock:(id /* block */)a2;
- (id)appendCString:(const char *)a0 withName:(id)a1;
- (id)appendTimeInterval:(double)a0 withName:(id)a1 decomposeUnits:(BOOL)a2;
- (void)appendProem:(id)a0 block:(id /* block */)a1;
- (id)appendUInt64:(unsigned long long)a0 withName:(id)a1 format:(long long)a2;
- (void)appendString:(id)a0 withName:(id)a1;
- (id)appendInt64:(long long)a0 withName:(id)a1;
- (id)appendInteger:(long long)a0 withName:(id)a1;
- (id)description;
- (id)appendUnsignedInt:(unsigned int)a0 withName:(id)a1;
- (id)appendPoint:(struct CGPoint { double x0; double x1; })a0 withName:(id)a1;
- (id)appendSelector:(SEL)a0 withName:(id)a1;
- (id)appendDouble:(double)a0 withName:(id)a1 decimalPrecision:(unsigned long long)a2;
- (void)appendBodySectionWithName:(id)a0 block:(id /* block */)a1;
- (id)appendFloat:(double)a0 withName:(id)a1 decimalPrecision:(unsigned long long)a2;
- (void)appendCollection:(id)a0 withName:(id)a1 itemBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)appendBodySectionWithName:(id)a0 openDelimiter:(id)a1 closeDelimiter:(id)a2 block:(id /* block */)a3;
- (id)appendObject:(id)a0 withName:(id)a1;
- (id)appendInt:(int)a0 withName:(id)a1;
- (id)init;
- (void)appendString:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2;
- (void)appendRightArrow;
- (id)appendBool:(BOOL)a0 withName:(id)a1 ifEqualTo:(BOOL)a2;
- (void)appendString:(id)a0;
- (id)appendRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withName:(id)a1;
- (void)sameLine:(id /* block */)a0;
- (id)appendUnsignedInteger:(unsigned long long)a0 withName:(id)a1 format:(long long)a2;
- (id)appendVersionedPID:(long long)a0 withName:(id)a1;
- (id)appendQueue:(id)a0 withName:(id)a1;
- (id)appendPointer:(void *)a0 withName:(id)a1;
- (id)appendObject:(id)a0 withName:(id)a1 skipIfNil:(BOOL)a2;
- (void)appendBodySectionWithOpenDelimiter:(id)a0 closeDelimiter:(id)a1 block:(id /* block */)a2;
- (id)appendClass:(Class)a0 withName:(id)a1;
- (void)appendFormat:(id)a0;
- (id)appendSize:(struct CGSize { double x0; double x1; })a0 withName:(id)a1;
- (id)appendUnsignedInteger:(unsigned long long)a0 withName:(id)a1;
- (id)appendFlag:(long long)a0 withName:(id)a1 skipIfNotSet:(BOOL)a2;
- (id)appendBool:(BOOL)a0 withName:(id)a1;

@end
