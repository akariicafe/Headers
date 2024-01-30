@class NSString, TIHandwritingStrokes, TIKeyboardCandidate, TIKeyboardTouchEvent;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface TIKeyboardInput : NSObject <NSSecureCoding> {
    union { long long integerValue; struct { unsigned char uppercase : 1; unsigned char autoshifted : 1; unsigned char popupVariant : 1; unsigned char multitap : 1; unsigned char flick : 1; unsigned char gesture : 1; unsigned char synthesizedByAcceptingCandidate : 1; unsigned char doubleSpace : 1; unsigned char rapidDelete : 1; unsigned char shiftDown : 1; unsigned char expandSegment : 1; unsigned char shrinkSegment : 1; } fields; } _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) id<NSCopying, NSObject, NSSecureCoding> object;
@property (copy, nonatomic) TIHandwritingStrokes *handwritingStrokes;
@property (nonatomic, getter=isExpandSegment) BOOL expandSegment;
@property (nonatomic, getter=isShrinkSegment) BOOL shrinkSegment;
@property (nonatomic, getter=isBackspace) BOOL backspace;
@property (nonatomic, getter=isUppercase) BOOL uppercase;
@property (nonatomic, getter=isAutoshifted) BOOL autoshifted;
@property (nonatomic, getter=isPopupVariant) BOOL popupVariant;
@property (nonatomic, getter=isMultitap) BOOL multitap;
@property (nonatomic, getter=isFlick) BOOL flick;
@property (nonatomic, getter=isGesture) BOOL gesture;
@property (nonatomic, getter=isSynthesizedByAcceptingCandidate) BOOL synthesizedByAcceptingCandidate;
@property (nonatomic, getter=isDoubleSpace) BOOL doubleSpace;
@property (nonatomic, getter=isRapidDelete) BOOL rapidDelete;
@property (nonatomic, getter=isShiftDown) BOOL shiftDown;
@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent;
@property (nonatomic) long long transliterationType;
@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (copy, nonatomic) NSString *inputManagerHint;
@property (nonatomic) double timestamp;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
