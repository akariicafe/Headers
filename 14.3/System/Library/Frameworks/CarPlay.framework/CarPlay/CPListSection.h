@class NSString, NSArray;

@interface CPListSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *header;
@property (readonly, copy, nonatomic) NSString *sectionIndexTitle;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)initWithItems:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)indexOfItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)replaceItems:(id)a0;
- (id)initWithItems:(id)a0 header:(id)a1 sectionIndexTitle:(id)a2;
- (void)replaceItemAtIndex:(unsigned long long)a0 withItem:(id)a1;

@end
