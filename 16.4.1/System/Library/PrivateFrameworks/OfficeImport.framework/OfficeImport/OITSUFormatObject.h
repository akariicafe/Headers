@class NSString, NSUUID, OITSUCustomFormat;
@protocol TSUMultipleChoiceListChoiceProviding;

@interface OITSUFormatObject : NSObject <NSCopying, NSMutableCopying> {
    struct { int mFormatType; union { struct { unsigned short mCurrencyCodeIndex : 16; unsigned char mDecimalPlaces : 8; unsigned char mNegativeStyle : 3; unsigned char mShowThousandsSeparator : 1; unsigned char mUseAccountingStyle : 1; } mNumberFormatStruct; struct { unsigned char mFractionAccuracy : 8; } mFractionFormatStruct; struct { unsigned char mBase : 8; unsigned char mBasePlaces : 8; unsigned char mBaseUseMinusSign : 1; } mBaseFormatStruct; struct { unsigned char mSuppressDateFormat : 1; unsigned char mSuppressTimeFormat : 1; NSString *mDateTimeFormat; } mDateFormatStruct; struct { unsigned char mUseAutomaticUnits : 1; int mDurationUnitSmallest; int mDurationUnitLargest; int mDurationStyle; } mDurationFormatStruct; struct { NSUUID *mCustomFormatKey; OITSUCustomFormat *mCustomFormat; unsigned int mLegacyID; unsigned char mAppliedConditionKey; } mCustomFormatStruct; struct { double mMinimum; double mMaximum; double mIncrement; int mDisplayFormatType; unsigned char mOrientation : 2; unsigned char mPosition : 2; } mControlFormatStruct; struct { int mInitialValue; unsigned int mMultipleChoiceListFormatID; id<TSUMultipleChoiceListChoiceProviding> mData; } mMultipleChoiceListFormatStruct; } ; } mFormatStruct;
}

@property (readonly, nonatomic) BOOL useExpandedContents;
@property (readonly, nonatomic) struct { int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; struct { double x0; double x1; double x2; int x3; unsigned char x4 : 2; unsigned char x5 : 2; } x6; struct { int x0; unsigned int x1; id x2; } x7; } x1; } formatStruct;

+ (id)defaultDateFormat:(id)a0;
+ (id)defaultDurationFormat;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTSUFormatFormatStruct:(struct { int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; struct { double x0; double x1; double x2; int x3; unsigned char x4 : 2; unsigned char x5 : 2; } x6; struct { int x0; unsigned int x1; id x2; } x7; } x1; })a0;
- (id)initWithTSUFormatFormatStruct:(struct { int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; struct { double x0; double x1; double x2; int x3; unsigned char x4 : 2; unsigned char x5 : 2; } x6; struct { int x0; unsigned int x1; id x2; } x7; } x1; })a0 useExpandedContents:(BOOL)a1;
- (void)p_setFormatStruct:(struct { int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; struct { double x0; double x1; double x2; int x3; unsigned char x4 : 2; unsigned char x5 : 2; } x6; struct { int x0; unsigned int x1; id x2; } x7; } x1; })a0;

@end
