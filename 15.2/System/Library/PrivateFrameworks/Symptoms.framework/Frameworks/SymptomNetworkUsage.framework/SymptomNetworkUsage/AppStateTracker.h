@class NSString, NSUUID;

@interface AppStateTracker : NSObject

@property (retain) NSString *displayName;
@property (retain) NSString *bundleName;
@property (retain) NSUUID *uuid;
@property int pid;
@property unsigned int state;

- (id)description;
- (void).cxx_destruct;

@end
