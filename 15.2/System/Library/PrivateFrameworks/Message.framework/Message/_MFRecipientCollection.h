@class NSArray, NSMutableArray;

@interface _MFRecipientCollection : NSObject {
    NSMutableArray *_to;
    NSMutableArray *_cc;
    NSMutableArray *_bcc;
}

@property (readonly, copy, nonatomic) NSArray *toRecipients;
@property (readonly, copy, nonatomic) NSArray *toRecipientStrings;
@property (readonly, copy, nonatomic) NSArray *ccRecipients;
@property (readonly, copy, nonatomic) NSArray *ccRecipientStrings;
@property (readonly, copy, nonatomic) NSArray *bccRecipients;
@property (readonly, copy, nonatomic) NSArray *bccRecipientStrings;

- (void)addBCCRecipient:(id)a0;
- (void)addToRecipientWithAddress:(id)a0 displayName:(id)a1;
- (void)addCCRecipientWithAddress:(id)a0 displayName:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addToRecipient:(id)a0;
- (void)addBCCRecipientWithAddress:(id)a0 displayName:(id)a1;
- (void)addCCRecipient:(id)a0;

@end
