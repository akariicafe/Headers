@class NSArray;

@interface PXCMMComposeRecipientSelectionSnapshot : NSObject

@property (readonly, copy, nonatomic) NSArray *selectedComposeRecipients;
@property (readonly, copy, nonatomic) NSArray *selectedRecipients;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSelectedComposeRecipients:(id)a0 selectedRecipients:(id)a1;

@end
