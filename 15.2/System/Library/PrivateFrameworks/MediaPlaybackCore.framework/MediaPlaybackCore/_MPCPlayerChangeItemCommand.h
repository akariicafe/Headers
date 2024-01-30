@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand>

@property (readonly, nonatomic) unsigned long long changeItemSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previousItem;
- (id)previousSection;
- (id)nextSection;
- (id)initWithResponse:(id)a0 changeItemSupport:(unsigned long long)a1;
- (id)changeToSection:(id)a0;
- (id)changeToItem:(id)a0;
- (id)nextItem;
- (id)nextChapter;
- (id)previousChapter;
- (id)previousItemDeferringToPlaybackQueuePosition;

@end
