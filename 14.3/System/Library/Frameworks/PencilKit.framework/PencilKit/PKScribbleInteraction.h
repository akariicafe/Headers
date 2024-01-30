@class NSString, UIView;
@protocol PKScribbleInteractionElementSource, PKScribbleInteractionWrapper, PKScribbleInteractionDelegate;

@interface PKScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {
    id<PKScribbleInteractionWrapper> _cachedWrapper;
}

@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL requestElementsShouldCallBackSynchronously;
@property (weak, nonatomic) id<PKScribbleInteractionDelegate> delegate;
@property (weak, nonatomic) id<PKScribbleInteractionElementSource> elementSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
