@class LNDialog, NSArray, NSUUID, NSString;

@interface LNDisambiguationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) NSArray *providedValues;
@property (readonly, copy, nonatomic) LNDialog *dialog;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)respondWithError:(id)a0;
- (void)respondWithValue:(id)a0;
- (id)initWithIdentifier:(id)a0 parameterName:(id)a1 providedValues:(id)a2 dialog:(id)a3;
- (void)respondWithSelectedIndex:(long long)a0;
- (void)respondWithSelectedItemIndex:(long long)a0;
- (void)responseWithSelectedIndex:(id)a0 value:(id)a1;

@end
