@class NSSet, NSArray;

@interface PXCMMComposeRecipientDataSource : NSObject

@property (copy, nonatomic) NSSet *recipients;
@property (readonly, copy, nonatomic) NSArray *composeRecipients;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithComposeRecipients:(id)a0 recipients:(id)a1;
- (unsigned long long)indexOfComposeRecipientForRecipient:(id)a0;

@end
