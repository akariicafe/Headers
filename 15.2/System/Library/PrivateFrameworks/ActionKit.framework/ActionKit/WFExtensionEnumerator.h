@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface WFExtensionEnumerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _lsToken;
    int _pkToken;
    NSSet *_supportedIdentifiers;
}

@property (readonly, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) NSSet *supportedIdentifiers;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (void)enumerateExtensions;

@end
