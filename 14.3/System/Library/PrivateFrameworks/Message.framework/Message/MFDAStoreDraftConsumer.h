@class NSString, MFError;

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer>

@property (readonly, nonatomic) NSString *serverId;
@property (readonly, nonatomic) MFError *error;
@property (readonly, nonatomic) BOOL success;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleResponse:(id)a0 error:(id)a1;

@end
