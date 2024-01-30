@interface TLKFormattedTextItem : TLKObject

@property (nonatomic) BOOL isBold;
@property (nonatomic) BOOL isEmphasized;
@property (nonatomic) long long color;

- (unsigned long long)_itemType;
- (BOOL)hasContent;

@end
