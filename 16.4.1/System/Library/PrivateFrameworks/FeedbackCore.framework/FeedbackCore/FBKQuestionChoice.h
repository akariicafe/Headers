@class NSString;

@interface FBKQuestionChoice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *title;
@property (readonly) id value;
@property (readonly, getter=isPrompt) BOOL prompt;
@property BOOL canSelect;

+ (id)choiceFromArray:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 value:(id)a1;

@end
