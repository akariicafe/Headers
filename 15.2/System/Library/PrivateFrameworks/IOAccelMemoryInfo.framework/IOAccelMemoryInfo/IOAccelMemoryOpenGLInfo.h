@class NSString;

@interface IOAccelMemoryOpenGLInfo : NSObject {
    id _expansionData;
}

@property int pid;
@property (retain) NSString *sharegroup;
@property unsigned long long objectType;
@property int name;
@property int blamedProcess;
@property (retain) NSString *objectDescription;
@property (retain) NSString *debugLabel;

- (id)description;
- (void)dealloc;

@end
