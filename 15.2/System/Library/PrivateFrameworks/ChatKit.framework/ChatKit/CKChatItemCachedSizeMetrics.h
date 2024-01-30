@class NSString, IMDoubleLinkedListNode, NSDate;

@interface CKChatItemCachedSizeMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *chatItemGUID;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textAlignmentInsets;
@property (retain, nonatomic) NSDate *lastAccess;
@property (retain, nonatomic) IMDoubleLinkedListNode *node;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
