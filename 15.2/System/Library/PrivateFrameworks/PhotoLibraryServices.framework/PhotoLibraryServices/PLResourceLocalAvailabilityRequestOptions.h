@class NSString, CPLResourceTransferTaskOptions;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject

@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (nonatomic) BOOL wantsProgress;
@property (nonatomic, getter=isTransient) BOOL transient;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (copy, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) BOOL shouldPrioritize;
@property (copy, nonatomic) CPLResourceTransferTaskOptions *downloadOptions;

- (void).cxx_destruct;
- (id)init;

@end
