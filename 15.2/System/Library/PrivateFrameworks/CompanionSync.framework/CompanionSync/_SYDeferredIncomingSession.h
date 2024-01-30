@class NSString, NSDictionary, NSURL, IDSMessageContext;

@interface _SYDeferredIncomingSession : NSObject

@property (copy, nonatomic) NSURL *resourceURL;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) IDSMessageContext *idsContext;

- (void).cxx_destruct;

@end
