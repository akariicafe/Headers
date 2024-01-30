@class NSString, NSError, NSMutableArray;

@interface _HDRemoteAuthorizationRequestRecord : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL didRecieveShouldPrompt;
@property (nonatomic) BOOL shouldPrompt;
@property (copy, nonatomic) NSString *hostAppName;
@property (copy, nonatomic) NSError *shouldPromptError;
@property (retain, nonatomic) NSMutableArray *records;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;

@end
