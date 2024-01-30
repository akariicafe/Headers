@class NSMutableDictionary, NSMutableArray;

@interface _NSMarkupTreeNode : NSObject

@property (readonly, retain, nonatomic) NSMutableDictionary *attributes;
@property (readonly, retain, nonatomic) NSMutableArray *children;

- (void)addChild:(id)a0;
- (void)dealloc;
- (void)addAttributes:(id)a0;

@end
