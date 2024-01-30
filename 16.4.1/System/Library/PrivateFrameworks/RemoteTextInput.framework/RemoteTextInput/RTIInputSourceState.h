@class NSString;

@interface RTIInputSourceState : NSObject <NSSecureCoding> {
    union { int integerValue; struct { unsigned char minimized : 1; unsigned char hardwareKeyboardMode : 1; unsigned char centerFilled : 1; unsigned char split : 1; unsigned char floating : 1; unsigned char showingEmojiSearch : 1; } fields; } _inputSourceStateMask;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *inputMode;
@property (nonatomic) BOOL minimized;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (nonatomic) BOOL centerFilled;
@property (nonatomic) BOOL split;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftSplitFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightSplitFrame;
@property (nonatomic) BOOL floating;
@property (nonatomic) BOOL showingEmojiSearch;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
