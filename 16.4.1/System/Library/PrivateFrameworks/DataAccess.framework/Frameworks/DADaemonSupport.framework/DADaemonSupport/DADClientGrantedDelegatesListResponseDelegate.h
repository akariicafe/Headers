@class NSString, NSArray;

@interface DADClientGrantedDelegatesListResponseDelegate : DADClientDelegate <DAEventsGrantedDelegatesListResponseConsumer> {
    id _requestID;
    NSArray *_results;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
