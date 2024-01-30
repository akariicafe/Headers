@class NSArray, NSString, TIWordEntry;

@interface TIWordEntryAligned : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *alignedTouches;
@property (retain, nonatomic) NSArray *alignedKeyboardInputs;
@property (copy, nonatomic) NSString *expectedString;
@property (copy, nonatomic) NSString *completeString;
@property (retain, nonatomic) TIWordEntry *originalWord;
@property (nonatomic) BOOL isContinuousPathConversion;
@property (nonatomic) int inSessionAlignmentConfidence;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
