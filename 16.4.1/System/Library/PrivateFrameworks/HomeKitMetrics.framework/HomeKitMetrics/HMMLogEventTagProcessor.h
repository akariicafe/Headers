@class HMMLogEvent, NSDictionary, NSString;
@protocol HMMLogEventSubmitting;

@interface HMMLogEventTagProcessor : NSObject <HMMTagSessionProcessing>

@property (readonly, nonatomic) id<HMMLogEventSubmitting> submitter;
@property (readonly, nonatomic) HMMLogEvent *logEvent;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) unsigned long long lastUpdate;
@property (readonly, nonatomic) NSDictionary *tagProcessingBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)closeForReason:(unsigned long long)a0;
- (id)initWithSubmitter:(id)a0;
- (void)setLogEventCloseReason:(unsigned long long)a0;

@end
