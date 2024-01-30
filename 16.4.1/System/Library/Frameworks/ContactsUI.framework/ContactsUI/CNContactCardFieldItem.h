@class NSString, CNPropertyGroupItem;

@interface CNContactCardFieldItem : NSObject

@property (readonly, nonatomic) CNPropertyGroupItem *groupItem;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *displayValue;

+ (id)photoItem;

- (void).cxx_destruct;
- (id)initWithDisplayLabel:(id)a0;
- (id)initWithGroupItem:(id)a0;

@end
