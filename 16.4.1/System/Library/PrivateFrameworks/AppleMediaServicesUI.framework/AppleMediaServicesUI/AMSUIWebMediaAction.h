@class NSArray, NSString, AMSUIWebClientContext;

@interface AMSUIWebMediaAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSArray *bundleIdentifiers;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSArray *includedResultKeys;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *urlString;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
