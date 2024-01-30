@class CRSet, NSMapTable, NSString;

@interface CROneOf : NSObject <CRDataType>

@property (retain, nonatomic) NSMapTable *timestamps;
@property (retain, nonatomic) CRSet *set;
@property (weak, nonatomic) id contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)realizeLocalChangesIn:(id)a0;
- (void)addItem:(id)a0;
- (void)setUpdated:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (id)timestampForNewItem;

@end
