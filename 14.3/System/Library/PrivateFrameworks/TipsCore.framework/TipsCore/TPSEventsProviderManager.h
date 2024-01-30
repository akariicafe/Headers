@class NSString, TPSDuetEventsProvider, TPSContentStatusEventsProvider, TPSPortraitEventsProvider;
@protocol TPSDEventsProviderManagerDelegate;

@interface TPSEventsProviderManager : NSObject <TPSEventsProviderDelegate> {
    TPSDuetEventsProvider *_duetEventsProvider;
    TPSPortraitEventsProvider *_portraitEventsProvider;
    TPSContentStatusEventsProvider *_contentStatusEventsProvider;
}

@property (weak, nonatomic) id<TPSDEventsProviderManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (long long)_dataTypeForDataProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dataProvider:(id)a0 didFinishQueryWithResults:(id)a1;
- (void)registerCallbackForEvents:(id)a0 type:(long long)a1;
- (void)dataProvider:(id)a0 didReceiveCallbackWithResult:(id)a1;
- (void)registerWakingCallbackForEvents:(id)a0 type:(long long)a1 clientIdentifier:(id)a2;
- (void)queryEvents:(id)a0 type:(long long)a1;

@end
