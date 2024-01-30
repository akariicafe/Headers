@class NSArray, NSMutableDictionary, NSMutableArray;

@interface _UICommandParentInserts : NSObject

@property (readonly, nonatomic) NSArray *atStartElements;
@property (readonly, nonatomic) NSArray *atEndElements;
@property (readonly, nonatomic) NSMutableDictionary *childInserts;
@property (readonly, nonatomic) NSMutableArray *fallbackBeforeElements;
@property (readonly, nonatomic) NSMutableArray *fallbackAfterElements;

- (void).cxx_destruct;
- (void)_addFallbackBeforeElements:(id)a0 fallbackAfterElements:(id)a1;
- (void)_setAtStartElements:(id)a0 atEndElements:(id)a1;
- (void)_setBeforeElements:(id)a0 afterElements:(id)a1 aroundElement:(id)a2;

@end
