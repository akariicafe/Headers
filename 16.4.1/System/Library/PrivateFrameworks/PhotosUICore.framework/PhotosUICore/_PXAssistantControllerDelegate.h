@class NSString, PXAssistantController;

@interface _PXAssistantControllerDelegate : NSObject <PXAssistantControllerDelegate> {
    PXAssistantController *_assistantController;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
