@class NSString, NSArray;

@interface CKVMutableItem : CKVItem

@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSArray *fields;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
