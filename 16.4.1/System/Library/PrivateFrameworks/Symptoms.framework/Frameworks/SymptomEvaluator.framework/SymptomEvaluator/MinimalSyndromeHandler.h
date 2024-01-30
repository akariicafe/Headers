@class NSString, ManagedEventHandler;

@interface MinimalSyndromeHandler : NSObject <SyndromeHandlerProtocol> {
    NSString *_syndromeName;
    char *_syndromeUTF8Name;
    ManagedEventHandler *_eventHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)getHandlerByName:(id)a0;

- (void)didReceiveSyndrome:(id)a0;
- (void).cxx_destruct;

@end
