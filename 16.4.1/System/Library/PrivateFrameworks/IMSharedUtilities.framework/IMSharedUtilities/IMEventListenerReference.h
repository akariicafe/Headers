@class IMEventListener;

@interface IMEventListenerReference : NSObject

@property (readonly, weak, nonatomic) IMEventListener *eventListener;

- (void).cxx_destruct;
- (id)initWithEventListener:(id)a0;

@end
