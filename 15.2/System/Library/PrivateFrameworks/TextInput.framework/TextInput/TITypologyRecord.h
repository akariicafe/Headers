@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *recordID;

+ (id)recordClasses;

- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (id)shortDescription;
- (id)textSummary;
- (id)textSummaryForAutocorrection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)changedText;
- (id)currentKeyboardState;

@end
