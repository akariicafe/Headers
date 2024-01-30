@class NSString, PXMessagesStackPlaybackControlViewModel;

@interface PXMessagesStackPlaybackControlUserData : NSObject <PXGViewUserData>

@property (readonly, nonatomic) long long itemIndex;
@property (readonly, nonatomic) PXMessagesStackPlaybackControlViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithItemIndex:(long long)a0 viewModel:(id)a1;

@end
