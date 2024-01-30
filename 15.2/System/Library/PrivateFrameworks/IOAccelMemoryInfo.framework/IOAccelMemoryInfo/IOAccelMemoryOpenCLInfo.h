@class NSString;

@interface IOAccelMemoryOpenCLInfo : NSObject {
    id _expansionData;
}

@property int pid;
@property (retain) NSString *cl_context;
@property unsigned long long cl_mem;
@property (retain) NSString *objectType;
@property (retain) NSString *objectDescription;

- (id)description;
- (void)dealloc;

@end
