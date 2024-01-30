@class NSString, NSArray;

@interface RBSXPCCodingArray : NSObject <NSFastEnumeration, RBSXPCCoding> {
    NSArray *_array;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;
- (unsigned long long)count;
- (id)initWithArray:(id)a0;

@end
