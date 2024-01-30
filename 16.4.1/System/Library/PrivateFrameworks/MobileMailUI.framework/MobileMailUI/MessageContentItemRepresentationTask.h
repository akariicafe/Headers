@class EFFuture, NSString, NSProgress, EFPromise, EFLocked;
@protocol EMContentItem;

@interface MessageContentItemRepresentationTask : NSObject

@property (retain, nonatomic) id<EMContentItem> contentItem;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) long long networkUsage;
@property (retain, nonatomic) NSProgress *topLevelProgress;
@property (retain, nonatomic) EFPromise *contentRequestPromise;
@property (retain, nonatomic) NSProgress *contentRequestProgress;
@property (retain, nonatomic) EFLocked *invokerIDs;
@property (readonly, nonatomic) EFFuture *future;
@property (readonly, nonatomic) NSProgress *progress;

- (void).cxx_destruct;
- (void)resume;
- (BOOL)hasBeenAccessedByInvokerWithID:(id)a0;
- (void)addAccessedByInvokerWithID:(id)a0;
- (id)initWithContentItem:(id)a0 type:(id)a1 networkUsage:(long long)a2;

@end
