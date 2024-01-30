@class NSUUID, NSDate;

@interface CMExerciseMinuteData : NSObject <NSSecureCoding, NSCopying> {
    long long fRecordId;
    double fStartDate;
    NSUUID *fSourceId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long recordId;
@property (readonly, nonatomic) NSUUID *sourceId;

+ (id)maxExerciseMinuteDataEntries;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithStartDate:(double)a0 recordId:(long long)a1 sourceId:(id)a2;

@end
