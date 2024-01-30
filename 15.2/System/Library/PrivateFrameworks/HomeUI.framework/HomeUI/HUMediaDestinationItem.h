@class HUHomeTheaterAudioItemModule;
@protocol HMMediaDestination;

@interface HUMediaDestinationItem : HFItem

@property (readonly) HUHomeTheaterAudioItemModule *homeTheaterAudioItemModule;
@property (readonly) id<HMMediaDestination> thisDestination;

- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithDestination:(id)a0 withModule:(id)a1;
- (id)iconForAudioDestination:(id)a0;

@end
