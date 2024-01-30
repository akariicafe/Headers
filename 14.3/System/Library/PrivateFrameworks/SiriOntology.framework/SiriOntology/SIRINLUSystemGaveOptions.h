@class NSArray, NSString;

@interface SIRINLUSystemGaveOptions : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *choices;
@property (retain, nonatomic) NSString *renderedText;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithChoices:(id)a0;

@end
