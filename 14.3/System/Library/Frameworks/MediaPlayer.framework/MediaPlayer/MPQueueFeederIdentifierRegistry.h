@class NSMutableArray, NSMapTable;

@interface MPQueueFeederIdentifierRegistry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *identifierSets;
@property (retain, nonatomic) NSMapTable *index;
@property (readonly, nonatomic) long long count;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)indexForItem:(id)a0;
- (id)identifierSetAtIndex:(long long)a0;
- (id)identifierSetForItem:(id)a0;
- (void)replaceItemAndIdentifierSet:(id)a0 atIndex:(long long)a1;
- (void)applyChanges:(id)a0 identifierSetLookupBlock:(id /* block */)a1;
- (id)itemForIdentifierSet:(id)a0;
- (id)itemAtIndex:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
