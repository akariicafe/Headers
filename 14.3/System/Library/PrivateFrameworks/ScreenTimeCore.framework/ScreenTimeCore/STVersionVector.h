@class NSString, NSMutableDictionary, NSArray, NSData;

@interface STVersionVector : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *nodeByIdentifier;
@property (copy, nonatomic) NSString *editorIdentifier;
@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;

- (id)initWithNode:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)join:(id)a0;
- (unsigned long long)evaluateCausality:(id)a0;
- (void)incrementNodeWithIdentifier:(id)a0;
- (BOOL)precedesVersionVector:(id)a0;
- (BOOL)isConcurrentWithVersionVector:(id)a0;
- (BOOL)isEqualToVersionVector:(id)a0;

@end
