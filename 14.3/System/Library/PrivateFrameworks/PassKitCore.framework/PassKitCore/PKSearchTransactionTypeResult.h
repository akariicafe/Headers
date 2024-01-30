@class NSString;

@interface PKSearchTransactionTypeResult : NSObject <PKSearchAutocompleteToken>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long transactionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)tokenType;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
