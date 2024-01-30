@class NSArray, NSString;

@interface CRTuple : NSObject <CRDataType, CRCoding>

@property (retain, nonatomic) NSArray *contents;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tupleWithArray:(id)a0;

- (void)realizeLocalChangesIn:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithArray:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;

@end
