@class NSUUID, CPListTemplate, NSString, UIImage, CPButton, NSArray;

@interface CPListSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) CPListTemplate *listTemplate;
@property (readonly, nonatomic) NSUUID *identifier;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long sectionHeaderStyle;
@property (readonly, copy, nonatomic) NSString *header;
@property (readonly, copy, nonatomic) NSString *headerSubtitle;
@property (copy, nonatomic) UIImage *headerImage;
@property (readonly, copy, nonatomic) CPButton *headerButton;
@property (readonly, copy, nonatomic) NSString *sectionIndexTitle;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)itemAtIndex:(unsigned long long)a0;
- (id)initWithItems:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)indexOfItem:(id)a0;
- (void)replaceItems:(id)a0;
- (id)initWithItems:(id)a0 header:(id)a1 sectionIndexTitle:(id)a2;
- (void)_commonInitWithItems:(id)a0 header:(id)a1 headerSubtitle:(id)a2 headerImage:(id)a3 headerButton:(id)a4 sectionIndexTitle:(id)a5;
- (id)initWithItems:(id)a0 header:(id)a1 headerSubtitle:(id)a2 headerImage:(id)a3 headerButton:(id)a4 sectionIndexTitle:(id)a5;
- (void)replaceItemAtIndex:(unsigned long long)a0 withItem:(id)a1;

@end
