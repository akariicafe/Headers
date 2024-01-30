@class NSString, NSMutableDictionary, NSArray, NSData;

@interface STVersionVector : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *nodeByIdentifier;
@property (copy, nonatomic) NSString *editorIdentifier;
@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;

- (id)description;
- (id)initWithNode:(id)a0;
- (void)join:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)evaluateCausality:(id)a0;
- (void)incrementNodeWithIdentifier:(id)a0;
- (BOOL)precedesVersionVector:(id)a0;
- (BOOL)isConcurrentWithVersionVector:(id)a0;
- (BOOL)isEqualToVersionVector:(id)a0;

@end
