@class NSString, NSData;

@interface TSUExtendedAttribute : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *value;

+ (id)extendedAttributeWithName:(id)a0 value:(id)a1;
+ (id)extendedAttributeFromPath:(id)a0 name:(id)a1 options:(int)a2 error:(id *)a3;

- (id)initWithName:(id)a0 value:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initFromPath:(id)a0 name:(id)a1 options:(int)a2 error:(id *)a3;
- (id)initFromPathFileSystemRepresentation:(const char *)a0 name:(id)a1 forRemoval:(BOOL)a2 options:(int)a3 error:(id *)a4;
- (BOOL)setAttributeToPathFileSystemRepresentation:(const char *)a0 options:(int)a1 error:(id *)a2;
- (BOOL)shouldPreserveForIntent:(unsigned int)a0;
- (BOOL)setAttributeToPath:(id)a0 options:(int)a1 error:(id *)a2;

@end
