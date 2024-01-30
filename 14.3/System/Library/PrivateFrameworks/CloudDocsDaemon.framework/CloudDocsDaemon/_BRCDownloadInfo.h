@class NSMutableDictionary;

@interface _BRCDownloadInfo : _BRCTransferInfo

@property (nonatomic) long long previousCompletedUnitCount;
@property (nonatomic) long long previousTotalUnitCount;
@property (readonly, nonatomic) NSMutableDictionary *resumeUnitCounts;

- (id)init;
- (void).cxx_destruct;
- (void)updateLocalizedDescriptionWithOptions:(char)a0;
- (void)copyProgressInfoToProgress:(id)a0 options:(char)a1;

@end
