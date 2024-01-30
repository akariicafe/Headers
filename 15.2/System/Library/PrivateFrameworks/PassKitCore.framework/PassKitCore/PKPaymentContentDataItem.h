@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPaymentContentItem *contentItem;

+ (long long)dataType;
+ (BOOL)supportsMultipleItems;

- (BOOL)isValidWithError:(id *)a0;
- (id)initWithContentItem:(id)a0;
- (void).cxx_destruct;

@end
