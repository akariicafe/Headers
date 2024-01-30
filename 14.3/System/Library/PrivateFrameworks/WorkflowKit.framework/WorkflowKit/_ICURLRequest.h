@class NSUUID, NSString, NSURL, ICScheme, NSDictionary;
@protocol WFUserInterfaceHost;

@interface _ICURLRequest : NSObject

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) ICScheme *scheme;
@property (readonly, copy, nonatomic) id /* block */ opener;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, weak, nonatomic) id<WFUserInterfaceHost> userInterface;
@property (copy, nonatomic) id /* block */ successHandler;
@property (copy, nonatomic) id /* block */ failureHandler;
@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic) NSString *subAction;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic, getter=isCallbackRequest) BOOL callbackRequest;
@property (nonatomic) BOOL deferCompletionUntilReturn;
@property (copy, nonatomic) NSString *successURLQueryString;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSURL *generatedCallbackURL;
@property (nonatomic) long long retries;
@property (nonatomic, getter=isInternalCallbackRequest) BOOL internalCallbackRequest;

+ (id)requestWithURL:(id)a0;
+ (id)requestWithURL:(id)a0 fromSourceApplication:(id)a1;
+ (id)requestWithURL:(id)a0 scheme:(id)a1 userInterface:(id)a2 bundleIdentifier:(id)a3 successHandler:(id /* block */)a4 failureHandler:(id /* block */)a5;

- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0 scheme:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 failureHandler:(id /* block */)a4 bundleIdentifier:(id)a5;
- (void)parseActions;

@end
