@class NSString, NSMutableArray;

@interface SSSection : NSObject <NSCopying>

@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) id sectionIdentifier;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (weak, nonatomic) Class headerClass;
@property (weak, nonatomic) Class footerClass;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;

+ (id)sectionWithItems:(id)a0;
+ (id)sectionWithItems:(id)a0 header:(id)a1 footer:(id)a2 identifier:(id)a3;
+ (id)sectionWithNumberOfItems:(unsigned long long)a0;
+ (id)sectionWithNumberOfItems:(unsigned long long)a0 header:(id)a1 footer:(id)a2 identifier:(id)a3;

- (unsigned long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemAtIndex:(unsigned long long)a0;

@end
