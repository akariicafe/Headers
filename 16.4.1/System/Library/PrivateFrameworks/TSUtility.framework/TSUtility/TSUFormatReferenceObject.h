@class NSString;
@protocol TSUMultipleChoiceListChoiceProviding;

@interface TSUFormatReferenceObject : NSObject {
    struct { int mFormatType; union { struct { NSString *mCurrencyCode; unsigned char mDecimalPlaces : 8; unsigned char mNegativeStyle : 3; unsigned char mShowThousandsSeparator : 1; unsigned char mUseAccountingStyle : 1; } mNumberFormatStruct; struct { unsigned char mFractionAccuracy : 8; } mFractionFormatStruct; struct { unsigned char mBase : 8; unsigned char mBasePlaces : 8; unsigned char mBaseUseMinusSign : 1; } mBaseFormatStruct; struct { unsigned char mSuppressDateFormat : 1; unsigned char mSuppressTimeFormat : 1; NSString *mDateTimeFormat; } mDateFormatStruct; struct { unsigned char mUseAutomaticUnits : 1; int mDurationUnitSmallest; int mDurationUnitLargest; int mDurationStyle; } mDurationFormatStruct; struct { unsigned int mCustomFormatID; struct *mData; } mCustomFormatStruct; struct { double mMinimum; double mMaximum; double mIncrement; int mDisplayFormatType; unsigned char mOrientation : 2; unsigned char mPosition : 2; } mControlFormatStruct; struct { int mInitialValue; unsigned int mMultipleChoiceListFormatID; id<TSUMultipleChoiceListChoiceProviding> mData; } mMultipleChoiceListFormatStruct; } ; } mFormatStruct;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (struct { int x0; union { struct { id x0; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { unsigned int x0; struct *x1; } x5; struct { double x0; double x1; double x2; int x3; unsigned char x4 : 2; unsigned char x5 : 2; } x6; struct { int x0; unsigned int x1; id x2; } x7; } x1; })getFormatStruct;
- (id)initWithTSUFormatFormatStruct:(struct { int x0; union { struct { id x0; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { unsigned int x0; struct *x1; } x5; struct { double x0; double x1; double x2; int x3; unsigned char x4 : 2; unsigned char x5 : 2; } x6; struct { int x0; unsigned int x1; id x2; } x7; } x1; })a0;

@end
