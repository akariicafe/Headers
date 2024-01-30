@class CRSet, NSMapTable, NSString;

@interface CROneOf : NSObject <CRDataType>

@property (retain, nonatomic) NSMapTable *timestamps;
@property (retain, nonatomic) CRSet *set;
@property (retain, nonatomic) id contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)tombstone;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)mergeWith:(id)a0;
- (void)setUpdated:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (id)timestampForNewItem;

@end
