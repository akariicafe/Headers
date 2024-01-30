@class NSNumber, NSUUID, NSDate;

@interface CMWorkoutMetsData : NSObject <NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fMets;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *mets;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCLWorkoutMets:(const struct CLWorkoutMets { double x0; double x1; unsigned char x2[16]; unsigned char x3[16]; double x4; } *)a0;
- (id)initWithSessionId:(id)a0 sourceId:(id)a1 startDate:(id)a2 endDate:(id)a3 mets:(id)a4;
- (void)dealloc;

@end
