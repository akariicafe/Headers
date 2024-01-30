@class NSString;

@interface MTLDebugResource : NSObject <NSObject>

@property (readonly) id baseObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
