@class NSArray, NSString;

@interface SIRINLUSystemInformed : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *entities;
@property (retain, nonatomic) NSString *renderedText;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithEntities:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
