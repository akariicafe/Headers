@class NSArray, NSSet, NSDictionary, NSOrderedSet;

@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying, NSFastEnumeration> {
    NSOrderedSet *_codingsOrderedSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *codings;
@property (readonly, copy, nonatomic) NSSet *codingsSet;
@property (readonly, copy, nonatomic) NSDictionary *codingsBySystem;
@property (readonly, nonatomic) long long count;

+ (id)collectionWithCodings:(id)a0;
+ (id)collectionWithCoding:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCodings:(id)a0;
- (id)collectionByAddingCodings:(id)a0;
- (id)codingsForCodingSystem:(id)a0;
- (unsigned long long)hash;

@end
