@class NSString, ATXBiomeUIStream;

@interface ATXSearchFeedbackListenerTargetBiomeStream : NSObject <ATXSearchFeedbackListenerTarget> {
    ATXBiomeUIStream *_uiStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
