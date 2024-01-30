@class NSString, NSMutableDictionary, NSURL, NSData, HMFActivity;

@interface HMFHTTPRequestInternal : HMFObject

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) NSMutableDictionary *headerFields;
@property (retain, nonatomic) NSData *body;
@property (readonly, nonatomic) HMFActivity *activity;

- (void).cxx_destruct;
- (id)init;
- (void)setHeaderValue:(id)a0 forHeaderKey:(id)a1;
- (id)responseWithStatusCode:(long long)a0;

@end
