@class PLQuery;

@interface PLQueryBuilder : NSObject {
    PLQuery *_query;
}

+ (id)andCombineFirstQuery:(id)a0 secondQuery:(id)a1;
+ (id)orCombineFirstQuery:(id)a0 secondQuery:(id)a1;
+ (id)_combineFirstQuery:(id)a0 secondQuery:(id)a1 conjunction:(int)a2;
+ (id)validComparatorsForQueryKey:(int)a0;
+ (id)validUnitValuesForQueryKey:(int)a0;
+ (id)notQuery:(id)a0;

- (id)query;
- (void).cxx_destruct;
- (void)addIsRawQuery:(BOOL)a0;
- (void)_addQueryWithKey:(int)a0 firstValue:(id)a1 secondValue:(id)a2 valueType:(int)a3 unit:(int)a4 comparator:(int)a5;
- (void)addIsFavoriteQuery:(BOOL)a0;
- (void)addIsHiddenQuery:(BOOL)a0;
- (void)addIsAdjustedQuery:(BOOL)a0;
- (void)addAssetTypeQuery:(int)a0 exclude:(BOOL)a1;
- (void)addIsInAlbumQuery:(id)a0;
- (void)addIsInAnyAlbumQuery;
- (void)addIsReferencedMediaQuery:(BOOL)a0;
- (BOOL)_isValidDateKey:(int)a0;
- (void)addFilenameQuery:(id)a0 comparator:(int)a1;
- (void)addIsDateQueryKey:(int)a0 withDate:(id)a1 exclude:(BOOL)a2;
- (void)addInTheLastDaysQueryKey:(int)a0 withCount:(long long)a1 exclude:(BOOL)a2;
- (void)addInTheLastWeeksQueryKey:(int)a0 withCount:(long long)a1 exclude:(BOOL)a2;
- (void)addInTheLastMonthsQueryKey:(int)a0 withCount:(long long)a1 exclude:(BOOL)a2;
- (BOOL)_isValidStringComparator:(int)a0;
- (void)addInTheLastYearsQueryKey:(int)a0 withCount:(long long)a1 exclude:(BOOL)a2;
- (void)addInTheLastSecondsQueryKey:(int)a0 withCount:(long long)a1 exclude:(BOOL)a2;
- (void)_addDateUnitQueryForKey:(int)a0 withValue:(id)a1 withType:(int)a2 withUnit:(int)a3 exclude:(BOOL)a4;
- (void)addApertureRangeQueryBetweenValue:(double)a0 andValue:(double)a1;
- (void)_addRangeQueryForKey:(int)a0 withFirstValue:(id)a1 withSecondValue:(id)a2 withType:(int)a3;
- (void)addIsoRangeQueryBetweenValue:(long long)a0 andValue:(long long)a1;
- (void)addDateRangeQueryKey:(int)a0 between:(id)a1 and:(id)a2;
- (void)addTitleQuery:(id)a0 comparator:(int)a1;
- (void)addDescriptionQuery:(id)a0 comparator:(int)a1;
- (void)addTextQuery:(id)a0 comparator:(int)a1;
- (void)_addStringQueryKey:(int)a0 stringValue:(id)a1 comparator:(int)a2;
- (BOOL)_validIsEmptyQueryKey:(int)a0;
- (void)addIsEmptyQueryForKey:(int)a0 isEmpty:(BOOL)a1;
- (BOOL)_isValidNumericComparator:(int)a0;
- (void)addApertureQuery:(double)a0 comparator:(int)a1;
- (void)addHasLocationQuery:(BOOL)a0;
- (void)addBitrateQuery:(double)a0 comparator:(int)a1;
- (void)addCameraModelQuery:(id)a0 comparator:(int)a1;
- (void)addCameraMakeQuery:(id)a0 comparator:(int)a1;
- (void)addCodecQuery:(id)a0 comparator:(int)a1;
- (void)addDurationQuery:(double)a0 comparator:(int)a1;
- (void)addExposureBiasQuery:(double)a0 comparator:(int)a1;
- (void)addFlashQuery:(BOOL)a0;
- (void)addFocalLengthQuery:(double)a0 comparator:(int)a1;
- (void)addIsoQuery:(long long)a0 comparator:(int)a1;
- (void)addFpsQuery:(double)a0 comparator:(int)a1;
- (void)addLensModelQuery:(id)a0 comparator:(int)a1;
- (void)addMeteringModeQuery:(long long)a0 comparator:(int)a1;
- (void)addSampleRateQuery:(long long)a0 comparator:(int)a1;
- (void)addKeywordQuery:(id)a0 exclude:(BOOL)a1;
- (void)addShutterSpeedQuery:(double)a0 comparator:(int)a1;
- (void)addTrackFormatQuery:(long long)a0 comparator:(int)a1;
- (void)addWhiteBalanceQuery:(long long)a0 comparator:(int)a1;
- (void)addPersonQuery:(id)a0 comparator:(int)a1;
- (void)addUnableToUploadQuery;
- (void)_addQueryForKey:(int)a0 withValue:(id)a1 withType:(int)a2 withComparator:(int)a3;
- (void)addIsBeforeDateQueryKey:(int)a0 withDate:(id)a1;
- (void)addIsAfterDateQueryKey:(int)a0 withDate:(id)a1;
- (id)initWithConjunction:(int)a0;
- (void)addIntegerQueryKey:(int)a0 withValue:(long long)a1 comparator:(int)a2;
- (void)addDoubleQueryKey:(int)a0 withValue:(double)a1 comparator:(int)a2;

@end
