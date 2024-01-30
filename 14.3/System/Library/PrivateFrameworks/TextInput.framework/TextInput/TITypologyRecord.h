@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *recordID;

+ (id)recordClasses;

- (id)textSummary;
- (id)init;
- (void).cxx_destruct;
- (id)textSummaryForAutocorrection:(id)a0;
- (id)shortDescription;
- (void)applyToStatistic:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (id)changedText;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)a0;

@end
