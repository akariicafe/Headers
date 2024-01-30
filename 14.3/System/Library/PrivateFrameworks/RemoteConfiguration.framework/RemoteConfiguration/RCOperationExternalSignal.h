@class NSString, NSObject;
@protocol OS_dispatch_group;

@interface RCOperationExternalSignal : NSObject <RCOperationRetrySignal> {
    BOOL _result;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
