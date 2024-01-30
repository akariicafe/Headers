@class NSString;

@interface SFAirDropAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *transferIdentifier;
@property (nonatomic) unsigned long long minRequiredTransferState;
@property (nonatomic) unsigned long long maxTransferState;
@property (nonatomic) BOOL requiresUnlockedUI;
@property (nonatomic) BOOL shouldUpdateUserResponse;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *singleItemLocalizedTitle;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)triggerAction;
- (id)initWithTransferIdentifier:(id)a0 actionIdentifier:(id)a1 title:(id)a2 singleItemTitle:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
