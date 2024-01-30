@class NSString;

@interface SSImageSurface : NSObject <BSXPCCoding>

@property (nonatomic) struct __IOSurface { } *backingSurface;
@property (nonatomic) double scale;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
