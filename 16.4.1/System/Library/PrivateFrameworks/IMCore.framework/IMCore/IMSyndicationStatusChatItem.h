@class NSString;

@interface IMSyndicationStatusChatItem : IMMessageStatusChatItem

@property (readonly, nonatomic) long long syndicationStatus;
@property (readonly, nonatomic) BOOL wasDetectedAsSWYSpam;
@property (readonly, copy, nonatomic) NSString *swyAppName;
@property (readonly, copy, nonatomic) NSString *swyBundleID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 withSyndicationStatus:(long long)a1;

@end
