@protocol _MSMessageComposeExtensionImplProtocol;

@interface _MSExtensionGlobalState : NSObject

@property (retain, nonatomic) id<_MSMessageComposeExtensionImplProtocol> activeExtensionContext;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
