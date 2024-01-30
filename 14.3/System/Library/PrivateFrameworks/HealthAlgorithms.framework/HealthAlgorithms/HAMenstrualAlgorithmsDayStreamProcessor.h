@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    struct unique_ptr<Nightingale::ngt_DayStreamProcessor, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor> > { struct __compressed_pair<Nightingale::ngt_DayStreamProcessor *, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor> > { struct ngt_DayStreamProcessor *__value_; } __ptr_; } _dayStreamProcessor;
    struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } _julianDayOfLastInput;
    struct unique_ptr<HealthAlgorithms::PhaseCondenser, std::__1::default_delete<HealthAlgorithms::PhaseCondenser> > { struct __compressed_pair<HealthAlgorithms::PhaseCondenser *, std::__1::default_delete<HealthAlgorithms::PhaseCondenser> > { struct PhaseCondenser *__value_; } __ptr_; } _phaseCondenser;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)analyze;
- (void)beginPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (void)appendDay:(id)a0;
- (id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)a0;
- (void)endPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (id).cxx_construct;

@end
