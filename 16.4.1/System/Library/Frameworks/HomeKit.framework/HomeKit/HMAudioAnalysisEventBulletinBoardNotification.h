@class NSUUID;

@interface HMAudioAnalysisEventBulletinBoardNotification : HMBulletinBoardNotification

@property (copy) NSUUID *accessoryIdentifier;
@property (readonly) unsigned long long options;

+ (id)predicateForAudioAnalysisOptions:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)commitWithCompletionHandler:(id /* block */)a0;
- (id)initWithBulletinBoardNotification:(id)a0;

@end
