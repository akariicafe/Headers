@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *recordID;

+ (id)recordClasses;

- (void)encodeWithCoder:(id)a0;
- (void)replaceDocumentState:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (id)textSummary;
- (id)init;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;
- (id)currentKeyboardState;
- (id)changedText;
- (id)textSummaryForAutocorrection:(id)a0;

@end
