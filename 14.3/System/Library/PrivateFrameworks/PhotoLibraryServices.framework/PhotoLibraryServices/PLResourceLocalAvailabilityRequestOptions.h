@class NSString;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject

@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (nonatomic) BOOL wantsProgress;
@property (nonatomic, getter=isTransient) BOOL transient;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (copy, nonatomic) NSString *clientBundleID;
@property (nonatomic) unsigned long long downloadIntent;
@property (readonly, nonatomic) BOOL shouldPrioritize;

- (void).cxx_destruct;

@end
