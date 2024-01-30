@class NSString;

@interface UVBSPipeServiceClientConnection : UVBSPipeServiceConnection <UVBSClientConnection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithEndpoint:(id)a0 error:(id *)a1;
+ (id)createAsHost:(id *)a0;


@end
