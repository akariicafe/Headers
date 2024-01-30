@class NSString, NSUUID, TSUCustomFormat;

@interface TSUFormatterDictionaryKey : NSObject <NSCopying> {
    struct { unsigned int mFormatType; union { struct { unsigned short mCurrencyCodeIndex : 16; unsigned char mDecimalPlaces : 8; unsigned char mNegativeStyle : 3; unsigned char mShowThousandsSeparator : 1; unsigned char mUseAccountingStyle : 1; } mNumberFormatStruct; struct { unsigned char mFractionAccuracy : 8; } mFractionFormatStruct; struct { unsigned char mBase : 8; unsigned char mBasePlaces : 8; unsigned char mBaseUseMinusSign : 1; } mBaseFormatStruct; struct { unsigned char mSuppressDateFormat : 1; unsigned char mSuppressTimeFormat : 1; NSString *mDateTimeFormat; } mDateFormatStruct; struct { unsigned char mUseAutomaticUnits : 1; unsigned char mDurationUnitSmallest; unsigned char mDurationUnitLargest; unsigned char mDurationStyle; } mDurationFormatStruct; struct { NSUUID *mCustomFormatKey; TSUCustomFormat *mCustomFormat; unsigned int mLegacyID; unsigned char mAppliedConditionKey; } mCustomFormatStruct; } ; } _formatStruct;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTSUFormatFormatStruct:(struct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; unsigned char x1; unsigned char x2; unsigned char x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; } x1; })a0;

@end
