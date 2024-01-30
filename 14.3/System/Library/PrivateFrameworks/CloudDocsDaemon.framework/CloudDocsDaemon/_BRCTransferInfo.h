@class BRCProgress, NSMutableDictionary;

@interface _BRCTransferInfo : NSObject

@property (readonly, nonatomic) BRCProgress *progress;
@property (nonatomic) long long sumOfCompletedUnitCountDelta;
@property (nonatomic) long long sumOfTotalUnitCountDelta;
@property (readonly, nonatomic) NSMutableDictionary *versionSizes;
@property (readonly, nonatomic) NSMutableDictionary *childProgresses;
@property (readonly, nonatomic) NSMutableDictionary *previousUnitCounts;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)updateUnitCount;
- (void)updateLocalizedDescriptionWithOptions:(char)a0;
- (void)copyProgressInfoToProgress:(id)a0 options:(char)a1;
- (void)verifyFutureProgressIsNotFinished;

@end
