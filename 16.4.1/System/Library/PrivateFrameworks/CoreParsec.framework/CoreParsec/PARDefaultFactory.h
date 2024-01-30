@class NSString;

@interface PARDefaultFactory : NSObject <PARResultFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createResultObject;

@end
