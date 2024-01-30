@interface IMSyndicationStatusChatItem : IMMessageStatusChatItem

@property (readonly, nonatomic) long long syndicationStatus;

- (BOOL)isEqual:(id)a0;
- (id)_initWithItem:(id)a0 withSyndicationStatus:(long long)a1;

@end
