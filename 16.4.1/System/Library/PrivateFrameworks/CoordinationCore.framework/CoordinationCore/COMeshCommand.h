@class COMeshNode;

@interface COMeshCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) COMeshNode *sender;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)_setSender:(id)a0;
- (id)_sendingConstituent;
- (void)_setRapportOptions:(id)a0;
- (void)_setSendingConstituent:(id)a0;
- (id)rapportOptions;
- (unsigned long long)rapportTransactionID;

@end
