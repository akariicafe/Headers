@class NSArray, NSDictionary;

@interface IKAppDataSet : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSDictionary *usedPrototypesByIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *indexTitles;
@property (readonly, copy, nonatomic) NSArray *itemIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 usedPrototypesByIdentifier:(id)a1 indexTitles:(id)a2;

@end
