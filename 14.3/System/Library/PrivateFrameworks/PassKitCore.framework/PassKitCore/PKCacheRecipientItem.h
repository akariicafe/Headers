@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {
    NSDate *_insertDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPeerPaymentRecipient *item;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isNewerThan:(id)a0;
- (BOOL)hasExpired;
- (void)encodeWithCoder:(id)a0;

@end
