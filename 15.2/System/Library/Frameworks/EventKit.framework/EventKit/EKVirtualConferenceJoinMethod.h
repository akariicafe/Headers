@class NSString, NSURL;

@interface EKVirtualConferenceJoinMethod : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) BOOL isBroadcast;

- (id)description;
- (id)initWithTitle:(id)a0 url:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
