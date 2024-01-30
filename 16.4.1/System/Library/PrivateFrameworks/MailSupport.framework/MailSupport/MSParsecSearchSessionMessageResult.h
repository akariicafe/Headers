@class NSString;

@interface MSParsecSearchSessionMessageResult : NSObject <MSParsecSearchSessionResult>

@property (readonly, nonatomic) long long messageAge;
@property (readonly, nonatomic) NSString *resultID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultWithIdentifier:(id)a0;
+ (id)resultWithIdentifier:(id)a0 date:(id)a1;

- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initResultWithIdentifier:(id)a0 date:(id)a1;

@end
