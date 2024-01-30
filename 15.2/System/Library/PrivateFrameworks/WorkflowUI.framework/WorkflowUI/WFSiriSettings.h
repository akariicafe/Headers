@interface WFSiriSettings : NSObject

@property (class, readonly, nonatomic, getter=isSiriEnabled) BOOL siriEnabled;
@property (class, readonly, nonatomic, getter=isHeySiriEnabled) BOOL heySiriEnabled;

+ (id)localizedTriggerPhrase;
+ (id)localizedTriggerPhraseWithMessage:(id)a0;

@end
