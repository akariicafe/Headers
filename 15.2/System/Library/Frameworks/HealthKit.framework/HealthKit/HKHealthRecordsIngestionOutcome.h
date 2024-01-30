@class NSArray, NSString, NSError, NSNumber;

@interface HKHealthRecordsIngestionOutcome : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL taskSuccess;
@property (readonly, copy, nonatomic) NSNumber *taskRuntime;
@property (readonly, copy, nonatomic) NSError *taskError;
@property (readonly, copy, nonatomic) NSArray *perAccountOutcomes;
@property (readonly, copy, nonatomic) NSString *analyticsString;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTaskSuccess:(BOOL)a0 taskError:(id)a1 taskRuntime:(double)a2 perAccountOutcomes:(id)a3 analyticsString:(id)a4;
- (unsigned long long)hash;

@end
