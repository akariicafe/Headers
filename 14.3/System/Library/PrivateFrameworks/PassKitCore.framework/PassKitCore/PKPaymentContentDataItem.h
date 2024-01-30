@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPaymentContentItem *contentItem;

+ (BOOL)supportsMultipleItems;
+ (long long)dataType;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithContentItem:(id)a0;

@end
