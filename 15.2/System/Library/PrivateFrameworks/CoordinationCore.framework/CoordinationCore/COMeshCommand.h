@class COMeshNode;

@interface COMeshCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) COMeshNode *sender;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)rapportTransactionID;
- (void)_setRapportTransactionID:(id)a0;
- (void)_setSender:(id)a0;

@end
