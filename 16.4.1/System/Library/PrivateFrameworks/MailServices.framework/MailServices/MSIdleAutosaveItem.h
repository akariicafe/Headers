@class NSString;

@interface MSIdleAutosaveItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *autosaveIdentifier;
@property (readonly, copy, nonatomic) NSString *subject;

+ (id)withAutosaveIdentifier:(id)a0 subject:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAutosaveIdentifier:(id)a0 subject:(id)a1;

@end
