@class NSString, TIKeyboardInputManagerState, TIKeyboardIntermediateText, NSArray;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) TIKeyboardInputManagerState *inputManagerState;
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText;
@property (copy, nonatomic) NSString *layoutTag;
@property (copy, nonatomic) NSString *accentKeyString;
@property (nonatomic) BOOL assertDefaultKeyPlane;
@property (retain, nonatomic) NSArray *multilingualLanguages;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
