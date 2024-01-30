@class NSString, NSMutableArray;

@interface CDPDAuthObserver : NSObject <CDPDXPCEventListener> {
    NSMutableArray *_authListeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
