@class NSObject, NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

@interface BLTLightsAndSirensReplyInfoCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *localReplyInfo;
@property (retain, nonatomic) NSDate *timeToCheck;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedReplyCache;

- (id)init;
- (void).cxx_destruct;
- (void)_checkCache;
- (BOOL)_isTimeToCheck;
- (void)cacheReply:(id /* block */)a0 withSectionID:(id)a1 bulletinID:(id)a2 publicationDate:(id)a3 replyToken:(id)a4;
- (id)cacheDidPlayLightsAndSirens:(unsigned long long)a0 withReplyToken:(id)a1;
- (void)purgeReplyInfo:(id)a0 withReplyToken:(id)a1;
- (void)_setNextTimeToCheck;
- (id)_firstReplyInfoWithNoReplyWithReplyToken:(id)a0;
- (void)_addReplyInfo:(id)a0 forReplyToken:(id)a1;
- (id)_firstReplyInfoWithNoDidPlayStateWithReplyToken:(id)a0;

@end
