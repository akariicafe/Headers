@class NSArray, NSString;

@interface CRIndex : NSObject <NSCopying, CRDataType, CRCoding>

@property (retain, nonatomic) NSArray *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexWithPath:(id)a0;
+ (id)indexForReplica:(id)a0 betweenIndex:(id)a1 andIndex:(id)a2;

- (unsigned long long)depth;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tombstone;
- (long long)compare:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)mergeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (id)indexAtDepth:(unsigned long long)a0 withInteger:(long long)a1 replica:(id)a2;
- (id)nextIndexForReplica:(id)a0;
- (id)previousIndexForReplica:(id)a0;

@end
