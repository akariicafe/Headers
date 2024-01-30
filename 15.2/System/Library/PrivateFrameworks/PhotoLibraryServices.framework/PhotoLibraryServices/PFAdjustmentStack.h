@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration> {
    NSArray *_adjustments;
    NSOrderedSet *_maskUUIDs;
    unsigned long long _formatVersion;
}

+ (BOOL)isValidEnvelopeDictionary:(id)a0 errors:(id)a1;

- (id)maskUUIDs;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (id)initWithEnvelopeDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAdjustments:(id)a0;
- (id)adjustmentAtIndex:(unsigned long long)a0;
- (id)firstAdjustmentWithIdentifier:(id)a0;
- (id)adjustmentsWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)envelopeDictionary;
- (id)debugDescription;

@end
