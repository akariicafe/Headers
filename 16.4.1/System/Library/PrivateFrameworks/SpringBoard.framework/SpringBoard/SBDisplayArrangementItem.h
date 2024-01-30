@class NSString, FBSDisplayIdentity;

@interface SBDisplayArrangementItem : NSObject <BSDescriptionStreamable>

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) FBSDisplayIdentity *relativeDisplayIdentity;
@property (readonly, nonatomic) unsigned int edge;
@property (readonly, nonatomic) double offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayIdentity:(id)a0 relativeDisplayIdentity:(id)a1 edge:(unsigned int)a2 offset:(double)a3;

@end
