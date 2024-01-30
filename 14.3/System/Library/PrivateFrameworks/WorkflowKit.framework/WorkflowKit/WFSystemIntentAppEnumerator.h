@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFSystemIntentAppEnumerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    NSDictionary *_identifiersByIntentName;
    NSDictionary *_identifiersByUserActivityType;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerate;
- (id)supportedIdentifiersForIntentClassName:(id)a0 includingUserActivityBasedApps:(BOOL)a1;

@end
