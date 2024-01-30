@class NSString, BSServiceConnectionEndpoint;

@interface UVBSEndpoint : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) BSServiceConnectionEndpoint *underlying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end
