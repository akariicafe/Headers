@class NSString;

@interface BSCanonicalOrientationMapResolver : NSObject <BSInterfaceOrientationMapResolving, BSXPCSecureCoding> {
    long long _targetOrientation;
    long long _currentOrientation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithTargetOrientation:(long long)a0 currentOrientation:(long long)a1;
- (id)initWithBSXPCCoder:(id)a0;
- (long long)interfaceOrientationForSupportedOrientations:(unsigned long long)a0 preferredOrientation:(long long)a1;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
