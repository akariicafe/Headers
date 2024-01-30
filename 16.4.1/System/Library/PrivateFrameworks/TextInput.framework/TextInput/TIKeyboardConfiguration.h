@class NSString, TIKeyboardInputManagerState, TIKeyboardIntermediateText, NSArray;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) TIKeyboardInputManagerState *inputManagerState;
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText;
@property (copy, nonatomic) NSString *layoutTag;
@property (copy, nonatomic) NSString *accentKeyString;
@property (nonatomic) BOOL assertDefaultKeyPlane;
@property (retain, nonatomic) NSArray *multilingualLanguages;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
