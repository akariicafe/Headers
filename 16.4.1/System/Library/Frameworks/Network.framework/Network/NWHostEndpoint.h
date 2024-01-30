@class NSString;

@interface NWHostEndpoint : NWEndpoint

@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) NSString *port;

+ (id)endpointWithHostname:(id)a0 port:(id)a1;
+ (unsigned int)endpointType;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;

@end
