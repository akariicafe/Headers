@class HUHomeTheaterAudioItemModule;
@protocol HMMediaDestination;

@interface HUMediaDestinationItem : HFItem

@property (readonly) HUHomeTheaterAudioItemModule *homeTheaterAudioItemModule;
@property (readonly) id<HMMediaDestination> thisDestination;

- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithDestination:(id)a0 withModule:(id)a1;

@end
