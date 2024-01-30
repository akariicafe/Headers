@interface OspreyChannelRequestOptions : NSObject

@property (nonatomic, getter=isCompressionEnabled) BOOL compressionEnabled;
@property (nonatomic) BOOL forceHTTPv2;

- (id)init;
- (void)applyToOspreyMutableRequest:(id)a0;

@end
