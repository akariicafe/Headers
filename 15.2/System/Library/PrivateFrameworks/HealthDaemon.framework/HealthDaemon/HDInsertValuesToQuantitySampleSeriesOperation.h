@class NSArray, NSUUID, HKQuantitySample;

@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation {
    NSUUID *_legacySeriesIdentifier;
    BOOL _didAwakeFromJournal;
}

@property (readonly, copy, nonatomic) HKQuantitySample *series;
@property (readonly, copy, nonatomic) NSArray *values;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithSeries:(id)a0 values:(id)a1;

@end
