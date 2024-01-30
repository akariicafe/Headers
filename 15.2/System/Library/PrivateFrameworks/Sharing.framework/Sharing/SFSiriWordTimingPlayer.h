@class SFSiriWordTimingInfo, NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFSiriWordTimingPlayer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _wordIndex;
    SFSiriWordTimingInfo *_wordInfo;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ wordHandler;
@property (copy, nonatomic) NSArray *wordTimings;

- (void)_processWord;
- (void)_processNextWord;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;

@end
