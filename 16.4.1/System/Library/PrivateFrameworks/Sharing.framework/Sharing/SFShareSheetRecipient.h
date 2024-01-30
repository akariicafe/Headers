@class NSString, NSSet;

@interface SFShareSheetRecipient : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *realName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSSet *formattedHandles;
@property (readonly, nonatomic) NSString *contactIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithNode:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRealName:(id)a0 displayName:(id)a1 formattedHandles:(id)a2 contactIdentifier:(id)a3;

@end
