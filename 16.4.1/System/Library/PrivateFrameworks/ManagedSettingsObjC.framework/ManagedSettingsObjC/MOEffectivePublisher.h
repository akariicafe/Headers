@class MOSettingsPublisherBase;

@interface MOEffectivePublisher : MOPublisher

@property (readonly, nonatomic) MOSettingsPublisherBase *base;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterestedGroups:(id)a0;
- (id)sinkWithRecieveInput:(id /* block */)a0;

@end
