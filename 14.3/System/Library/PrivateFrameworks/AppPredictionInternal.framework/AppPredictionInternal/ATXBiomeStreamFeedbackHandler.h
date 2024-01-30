@class NSString, NSSet, BPSPublisher, NSObject, ATXFeedbackSessionRouter;
@protocol OS_dispatch_queue, ATXBiomeSessionProducerProtocol, BMBookmark;

@interface ATXBiomeStreamFeedbackHandler : NSObject <NSCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    id<BMBookmark> _bookmark;
    NSString *_bookmarkPath;
    unsigned long long _classVersion;
    ATXFeedbackSessionRouter *_feedbackSessionRouter;
    id<ATXBiomeSessionProducerProtocol> _sessionProducer;
    NSSet *_consumerSubTypeStringSet;
}

@property (retain, nonatomic) BPSPublisher *blendingPublisher;
@property (retain, nonatomic) BPSPublisher *clientModelPublisher;
@property (retain, nonatomic) BPSPublisher *uiStreamPublisher;
@property (retain, nonatomic) BPSPublisher *appLaunchPublisher;
@property (retain, nonatomic) BPSPublisher *intentPublisher;
@property (retain, nonatomic) BPSPublisher *predictionContextPublisher;

+ (id)feedbackHandlerWithBookmarkPath:(id)a0 feedbackRouter:(id)a1 sessionProducer:(id)a2 consumerSubTypeStringSet:(id)a3;
+ (BOOL)_fileExistsAtPath:(id)a0;
+ (BOOL)_fileSizeWithinLimits:(id)a0;
+ (id)_dataFromFileHandle:(id)a0;
+ (id)_timeBasedMergedOnStoreStreamPublisher:(id)a0 otherStoreStreamPublishers:(id)a1;
+ (id)_currentPredictionContext;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)processInteractionFeedback;
- (void)persistBookmark;
- (id)initWithBookmark:(id)a0 bookmarkPath:(id)a1 classVersion:(unsigned long long)a2 feedbackRouter:(id)a3 sessionProducer:(id)a4 consumerSubTypeStringSet:(id)a5;
- (id)inferredUIStreamForConsumerSubTypeStringSet:(id)a0;
- (id)_filteredCacheUpdateClientModelPublisher:(id)a0;
- (id)_contextPublisherPublisher:(id)a0 consumerSubTypeStringSet:(id)a1;
- (BOOL)isEqualToATXBiomeStreamFeedbackHandler:(id)a0;

@end
