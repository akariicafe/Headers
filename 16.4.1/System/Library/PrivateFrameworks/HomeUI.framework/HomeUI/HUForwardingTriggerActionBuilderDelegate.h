@class NSString;
@protocol HUTriggerActionBuilderEditorDelegate;

@interface HUForwardingTriggerActionBuilderDelegate : NSObject <HUTriggerEditorDelegate>

@property (weak, nonatomic) id<HUTriggerActionBuilderEditorDelegate> triggerActionBuilderEditorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
