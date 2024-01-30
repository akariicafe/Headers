@class NSString;

@interface DummyWebAccessStateController : NSObject <CDPWebAccessStatusProvider, CDPWebAccessStatusUpdater> {
    unsigned long long webAccessStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
