@class NSString, NSURL;

@interface MCMActionArgumentBase : NSObject <MCMActionArgument>

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;

@end
