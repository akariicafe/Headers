@class NSString, NSUUID;

@interface AppStateTracker : NSObject

@property (retain) NSString *displayName;
@property (retain) NSString *bundleName;
@property (retain) NSUUID *uuid;
@property int pid;
@property unsigned int state;

- (void).cxx_destruct;
- (id)description;

@end
