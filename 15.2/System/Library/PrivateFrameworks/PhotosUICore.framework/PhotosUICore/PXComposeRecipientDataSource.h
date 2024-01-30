@class NSSet, NSArray;

@interface PXComposeRecipientDataSource : NSObject

@property (copy, nonatomic) NSSet *recipients;
@property (readonly, copy, nonatomic) NSArray *composeRecipients;

- (void).cxx_destruct;
- (id)init;
- (id)initWithComposeRecipients:(id)a0 recipients:(id)a1;
- (unsigned long long)indexOfComposeRecipientForRecipient:(id)a0;

@end
