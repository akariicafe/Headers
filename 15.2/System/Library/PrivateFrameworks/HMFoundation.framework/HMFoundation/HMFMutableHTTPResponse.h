@class NSData;

@interface HMFMutableHTTPResponse : HMFHTTPResponse

@property (copy, nonatomic) NSData *body;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBody:(id)a0;
- (void)setHeaderValue:(id)a0 forHeaderKey:(id)a1;

@end
