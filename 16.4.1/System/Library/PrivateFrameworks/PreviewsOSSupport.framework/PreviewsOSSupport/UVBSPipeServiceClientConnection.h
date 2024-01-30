@class NSString;

@interface UVBSPipeServiceClientConnection : UVBSPipeServiceConnection <UVBSClientConnection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithEndpoint:(id)a0 error:(id *)a1;
+ (id)createWithVariant:(long long)a0 error:(id *)a1;


@end
