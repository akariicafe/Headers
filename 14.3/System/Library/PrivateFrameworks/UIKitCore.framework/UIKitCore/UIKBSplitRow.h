@class NSDictionary, NSMutableArray, UIKBTree;

@interface UIKBSplitRow : NSObject {
    NSMutableArray *_vacancies;
    UIKBTree *_keylistLeft;
    UIKBTree *_geolistLeft;
    UIKBTree *_attrlistLeft;
    UIKBTree *_keylistRight;
    UIKBTree *_geolistRight;
    UIKBTree *_attrlistRight;
}

@property (nonatomic) unsigned char rowIndex;
@property double rowOffset;
@property double rowWidth;
@property struct CGSize { double width; double height; } defaultKeySize;
@property (readonly) NSMutableArray *keys;
@property (retain) NSDictionary *hints;

- (id)keyAtIndex:(int)a0;
- (id)init;
- (void)addKey:(id)a0;
- (void)dealloc;
- (id)listOfType:(int)a0 left:(BOOL)a1;
- (id)description;

@end
