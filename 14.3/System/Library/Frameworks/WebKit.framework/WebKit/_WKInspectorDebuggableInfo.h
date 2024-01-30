@class NSString;

@interface _WKInspectorDebuggableInfo : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::DebuggableInfo> { struct type { unsigned char __lx[56]; } data; } _debuggableInfo;
}

@property (nonatomic) long long debuggableType;
@property (copy, nonatomic) NSString *targetPlatformName;
@property (copy, nonatomic) NSString *targetBuildVersion;
@property (copy, nonatomic) NSString *targetProductVersion;
@property (nonatomic) BOOL targetIsSimulator;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
