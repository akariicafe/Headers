@class NSString, NSNumber, NSDate;

@interface HKAudiogramDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    unsigned long long _diagnosticCategory;
    NSNumber *_leftAverageEarSensitivity;
    NSNumber *_rightAverageEarSensitivity;
    NSNumber *_minimumSensitivity;
    NSNumber *_maximumSensitivity;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)a0 unitController:(id)a1 valueFont:(id)a2 unitFont:(id)a3 dateCache:(id)a4;
- (id)attributedSupplementaryStringWithDisplayType:(id)a0 unitController:(id)a1 font:(id)a2;
- (id)initWithDiagnosticCategory:(unsigned long long)a0 leftAverageEarSensitivity:(id)a1 rightAverageEarSensitivity:(id)a2 minimumSensitivity:(id)a3 maximumSensitivity:(id)a4 date:(id)a5;
- (id)_localizedAverageSensitivity:(id)a0 ear:(long long)a1 displayType:(id)a2 unitController:(id)a3 shortened:(BOOL)a4;
- (id)_rangeStringWithDisplayType:(id)a0 unitController:(id)a1;
- (id)_stringWithDisplayType:(id)a0 unitController:(id)a1 shortened:(BOOL)a2;
- (id)attributedSupplementaryStringWithDisplayType:(id)a0 unitController:(id)a1 font:(id)a2 shortened:(BOOL)a3;
- (id)lastUpdatedDescriptionWithDateCache:(id)a0;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)a0;
- (id)stringWithDisplayType:(id)a0 unitController:(id)a1;

@end
