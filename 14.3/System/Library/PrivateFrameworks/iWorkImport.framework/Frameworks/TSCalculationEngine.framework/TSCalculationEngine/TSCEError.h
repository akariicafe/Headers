@class NSString, NSNumber, NSDictionary;

@interface TSCEError : NSObject <NSCopying> {
    NSDictionary *_errorDictionary;
}

@property (readonly, nonatomic) NSString *errorType;
@property (readonly, nonatomic) NSString *errorClass;
@property (readonly, nonatomic) id extraInfo;
@property (readonly, nonatomic) NSNumber *debugOnlyErrorNumber;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly, nonatomic) NSNumber *argIndex;
@property (readonly, nonatomic) NSNumber *argIndex2;

+ (id)notReadyError;
+ (void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)a0 hasInitialUnrelatedArgument:(BOOL)a1;
+ (void)raiseErrorForInvalidReference;
+ (void)raiseRangeSizeMismatchErrorForFunctionName:(id)a0;
+ (void)raiseMixedTypeManipulationErrorForFunctionName:(id)a0;
+ (void)raiseUnknownFunctionErrorForString:(id)a0;
+ (void)raiseInvalidTokenInFormulaError;
+ (id)referenceToNonexistentTableError:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0;
+ (id)durationNotAllowedError:(id)a0 argumentNumber:(int)a1;
+ (void)raiseInvalidDateManipulationError;
+ (void)raiseNumberMinusDateError;
+ (void)raiseComparisonTypeExceptionForLeftType:(int)a0 rightType:(int)a1;
+ (void)raiseArgumentSetUsedOutOfContextError;
+ (void)raiseTypeExceptionForValue:(struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; })a0 functionSpec:(id)a1 argumentIndex:(int)a2 locale:(id)a3;
+ (void)raiseInvalidCurrencyComparisonError;
+ (void)raiseInvalidComparisonError;
+ (void)raiseMismatchedCurrenciesErrorForFunctionName:(id)a0;
+ (void)raiseDivideByZeroError;
+ (void)raiseZeroToPowerOfZeroError;
+ (void)raiseDurationNotAllowedError:(id)a0 argumentNumber:(int)a1;
+ (void)raiseValueErrorForFunctionName:(id)a0;
+ (id)errorDictionaryForType:(id)a0;
+ (id)errorWithDictionary:(id)a0;
+ (void)raiseAbortError;
+ (id)invalidReferenceError;
+ (id)errorDictionaryForType:(id)a0 andClass:(id)a1 extraInfo:(id)a2;
+ (id)errorDictionaryForType:(id)a0 functionName:(id)a1 extraInfo:(id)a2;
+ (id)errorDictionaryForType:(id)a0 andClass:(id)a1;
+ (void)p_RaiseErrorForDictionary:(id)a0;
+ (BOOL)p_DictionaryRepresentsInvalidMergeReference:(id)a0;
+ (void)raiseErrorForError:(id)a0;
+ (id)errorDictionaryForType:(id)a0 functionName:(id)a1;
+ (void)raiseErrorForInvalidReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a0 orString:(id)a1 contextEntityUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a2 invalidMergeReference:(BOOL)a3 disqualifiedFromEndCell:(BOOL)a4;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)a0 functionName:(id)a1 lowerBound:(double)a2 lowerBoundInclusive:(BOOL)a3 upperBound:(double)a4 upperBoundInclusive:(BOOL)a5;
+ (void)raiseMatchNotFoundErrorForValue:(id)a0 isRegex:(BOOL)a1 afterMatch:(BOOL)a2 previousValueToMatch:(id)a3 previousValueIsRegex:(BOOL)a4 occurrence:(int)a5 matchesFound:(int)a6 functionName:(id)a7;
+ (id)indirectErrorForRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a0 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
+ (id)errorDictionaryForType:(id)a0 extraInfo:(id)a1;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)a0 argumentNumberString:(id)a1;
+ (id)invalidLiveStockAttributeError;
+ (id)notAReferenceToAFormulaError;
+ (id)invalidReferenceNameAttributeError;
+ (id)invalidHistoricalStockAttributeError;
+ (id)invalidLiveCurrencyAttributeError;
+ (id)invalidHistoricalCurrencyAttributeError;
+ (id)invalidHistoricalDateError;
+ (id)remoteDataUnavailableErrorWithAttribute:(id)a0;
+ (id)errorForToken:(id)a0;
+ (id)syntaxError;
+ (BOOL)exceptionIsFromCalcEngine:(id)a0;
+ (BOOL)exceptionIsCircularReferenceError:(id)a0;
+ (BOOL)exceptionIsRangeUsageError:(id)a0;
+ (id)circularReferenceError;
+ (id)badReferenceError;
+ (id)autoNumberAttachmentError;
+ (id)attachmentError;
+ (BOOL)exceptionIsInvalidMergeReference:(id)a0;
+ (void)raiseInvalidArrayContentsError;
+ (id)abortError;
+ (void)raiseNotReadyError;
+ (void)raiseDisallowedStockModeError:(id)a0;
+ (void)raiseNumberError;
+ (void)raiseNumberErrorForFunctionName:(id)a0;
+ (void)raiseAutoNumberAttachmentErrorInTextCell:(BOOL)a0;
+ (void)raiseAttachmentErrorInTextCell:(BOOL)a0;
+ (void)raiseValueNotAvailableErrorForFunctionName:(id)a0;
+ (void)raiseErrorForInvalidReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a0 orString:(id)a1 contextEntityUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a2;
+ (id)invalidMergeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a0 contextEntityUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)a0 functionName:(id)a1 lowerBound:(double)a2 lowerBoundInclusive:(BOOL)a3;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)a0 functionName:(id)a1 upperBound:(double)a2 upperBoundInclusive:(BOOL)a3;
+ (void)raiseMatchNotFoundErrorForValue:(id)a0 isRegex:(BOOL)a1 functionName:(id)a2;
+ (void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)a0;
+ (void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)a0;
+ (id)invalidDateManipulationError;
+ (void)raiseInvalidArgumentsErrorForFunctionName:(id)a0 argumentIndex:(int)a1;
+ (void)raiseIndirectErrorForRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a0 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
+ (void)raiseNoModeError;
+ (void)raiseEmptyArgumentError;
+ (void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)a0;
+ (void)raiseInvalidRangeUsageErrorForReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a0;
+ (void)raiseInvalidHyperlinkError;
+ (void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)a0;
+ (void)raiseUnionInsideIntersectionError;
+ (void)raiseCircularReferenceErrorWithReference:(id)a0;
+ (void)raiseNotAReferenceErrorForFunctionName:(id)a0;
+ (void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)a0 requiredType:(int)a1;
+ (void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)a0 argIndex1:(int)a1 argIndex2:(int)a2 argsAscending:(BOOL)a3 equalityPermitted:(BOOL)a4;
+ (void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)a0 argIndex1:(int)a1 argIndex2:(int)a2;
+ (void)raiseInvalidIndexForChooseError:(int)a0;
+ (void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)a0;
+ (void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)a0 string:(id)a1;
+ (void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)a0 string:(id)a1;
+ (void)raiseSignsMustMatchErrorForFunctionName:(id)a0;
+ (void)raiseRangeDoesNotSumToOneForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (void)raiseUnsupportedR1C1StyleError;
+ (void)raiseInvalidDateError;
+ (void)raiseInvalidTimeError;
+ (void)raiseNotAVectorError;
+ (void)raiseInvalidProbabilityErrorForFunctionName:(id)a0;
+ (void)raiseNumberSmallerThanZeroError;
+ (void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (void)raisePositionLargerThanArrayErrorForFunctionName:(id)a0;
+ (void)raiseInvalidFrequencyErrorForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (void)raiseInvalidTypeErrorForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (void)raiseInvalidTailErrorForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (void)raiseInvalidSubtotalFunctionNumberError;
+ (void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)a0;
+ (void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)a0;
+ (void)raiseTooFewDataPointsErrorForFunctionName:(id)a0;
+ (void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)a0;
+ (void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)a0;
+ (void)raiseReferenceToEmptyCellErrorForFunctionName:(id)a0 rangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a1;
+ (void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)a0 provided:(int)a1;
+ (void)raiseTooManyArguments:(id)a0 maximum:(int)a1 provided:(int)a2;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)a0;
+ (void)raiseUnitsNotAllowedErrorForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (void)raiseCurrencyNotAllowedErrorForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (id)sumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)a0;
+ (void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)a0;
+ (void)raiseNotEnoughInputsErrorForFunctionName:(id)a0 argumentNumber:(int)a1 required:(int)a2;
+ (void)raiseInvalidIntersectionError:(struct vector<TSCEReferenceValue, std::__1::allocator<TSCEReferenceValue> > { struct TSCEReferenceValue *x0; struct TSCEReferenceValue *x1; struct __compressed_pair<TSCEReferenceValue *, std::__1::allocator<TSCEReferenceValue> > { struct TSCEReferenceValue *x0; } x2; })a0 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1 calcEngine:(id)a2;
+ (void)raiseEmptyArrayError;
+ (void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)a0 base:(short)a1;
+ (void)raiseInvalidUnitStringError:(id)a0;
+ (void)raiseDifferentDimensionsErrorForFunctionName:(id)a0;
+ (void)raiseNonMetricUnitPrefixErrorForUnitString:(id)a0;
+ (void)raiseConvertOriginUnitMismatchError;
+ (void)raiseArrayElementNoDataError;
+ (void)raiseDataInvalidDimensionsError;
+ (void)raiseDataInvalidLengthError;
+ (void)raiseDataInvalidWidthError;
+ (void)raiseNegativeReceivedAmountError;
+ (void)raiseInvalidMatchModeError;
+ (void)raiseMismatchedMaxUnitsError;
+ (void)raiseVectorValueNotNumberErrorForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (void)raiseCharInputOutOfBoundsError;
+ (void)raiseDurationDisallowedForNormdistPDFError;
+ (void)raiseLinestHighlyCorrelatedVariableError;
+ (void)raiseMultipleDurationsErrorForFunctionName:(id)a0;
+ (void)raiseLinestMatrixUnderdeterminedError;
+ (void)raiseNegativeVectorValueErrorForFunctionName:(id)a0 argumentNumber:(int)a1;
+ (void)raisePercentRankInputOutOfRangeError;
+ (void)raisePercentRankExcInputOutOfRangeError;
+ (void)raiseLocationServicesNotEnabledError;
+ (void)raiseLocationHeadingUnknownError;
+ (void)raiseLocationUnknownError;
+ (void)raiseLocationUserDeniedError;
+ (void)raiseLocationNetworkError;
+ (void)raiseLocationHeadingFailureError;
+ (void)raiseInvalidLatitudeLongitudeError;
+ (void)raiseInvalidAltitudeError;
+ (void)raiseInvalidHeadingError;
+ (void)raiseInvalidRegexError:(id)a0;
+ (void)raiseStringTooLongError;
+ (void)raiseUnsupportedFunctionError;
+ (void)raiseUnsupportedFeatureError;
+ (void)raiseNoConditionIsTrueErrorForFunctionName:(id)a0;
+ (void)raiseInvalidLiveStockAttributeError;
+ (void)raiseNotAReferenceToAFormulaError;
+ (void)raiseInvalidReferenceNameAttributeError;
+ (void)raiseInvalidHistoricalStockAttributeError;
+ (void)raiseInvalidLiveCurrencyAttributeError;
+ (void)raiseInvalidHistoricalCurrencyAttributeError;
+ (void)raiseInvalidHistoricalDateError;
+ (void)raiseRemoteDataUnavailableErrorWithAttribute:(id)a0;
+ (id)noTradingInformationErrorWithNextAvailableDate:(id)a0;
+ (id)invalidStockCodeError:(id)a0;
+ (id)invalidCurrencyPairError;
+ (id)remoteDataServerError;

- (double)doubleValue;
- (struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } *)number;
- (void).cxx_destruct;
- (id)dateValue;
- (BOOL)isOfType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)error;
- (id)string;
- (id)date;
- (struct TSCEVector { void /* function */ **x0; struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector *x0; struct __shared_weak_count *x1; } x1; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x2; } *)vector;
- (BOOL)isEqual:(id)a0;
- (id)tokenString;
- (BOOL)boolean;
- (id)stringValue;
- (struct TSCEReferenceValue { void /* function */ **x0; struct TSCEEvalRef { struct TSCETableResolver *x0; struct TSUCellTractRef { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; BOOL x5; BOOL x6; BOOL x7; } x1; } x1; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x2; struct shared_ptr<TSCEValue> { struct TSCEValue *x0; struct __shared_weak_count *x1; } x3; BOOL x4; BOOL x5; struct TSUPreserveFlags { unsigned char x0; } x6; BOOL x7; struct TSCEWarningReportingContext *x8; } *)referenceValue;
- (id)initWithDictionary:(id)a0;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })rangeRef;
- (id)displayStringWithCalculationEngine:(id)a0 forTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1 andCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (BOOL)isAbortedError;
- (void)raiseException;
- (void)setErrorDictionary:(id)a0;
- (id)errorDictionary;
- (int)nativeType;
- (BOOL)isSyntaxError;
- (BOOL)isFromCalcEngine;
- (BOOL)isCircularReferenceError;
- (BOOL)errorIsRangeUsageError;
- (BOOL)isInvalidMergeReference;
- (BOOL)isNotReadyError;
- (BOOL)isUnsupportedFunctionError;
- (BOOL)isUnsupportedFeatureError;
- (BOOL)isErrorReferenceError;
- (BOOL)isInvalidReference;
- (int)deepType;
- (struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } *)numberForFunction:(id)a0 argumentIndex:(int)a1 warningReportingContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a2;
- (id)dateForFunction:(id)a0 argumentIndex:(int)a1 warningReportingContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a2;
- (id)stringForFunction:(id)a0 argumentIndex:(int)a1 warningReportingContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a2;
- (BOOL)booleanForFunction:(id)a0 argumentIndex:(int)a1 warningReportingContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a2;
- (struct TSCEVector { void /* function */ **x0; struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector *x0; struct __shared_weak_count *x1; } x1; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x2; })formattedVectorForFunction:(id)a0 argumentIndex:(int)a1 context:(struct TSCEEvaluationContext { } *)a2 format:(const struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } *)a3;
- (struct TSCEReferenceValue { void /* function */ **x0; struct TSCEEvalRef { struct TSCETableResolver *x0; struct TSUCellTractRef { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; BOOL x5; BOOL x6; BOOL x7; } x1; } x1; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x2; struct shared_ptr<TSCEValue> { struct TSCEValue *x0; struct __shared_weak_count *x1; } x3; BOOL x4; BOOL x5; struct TSUPreserveFlags { unsigned char x0; } x6; BOOL x7; struct TSCEWarningReportingContext *x8; } *)referenceValueForFunction:(id)a0 argumentIndex:(int)a1 warningReportingContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a2;
- (BOOL)isNativelyEqual:(struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; })a0;
- (id)bakedString;

@end
