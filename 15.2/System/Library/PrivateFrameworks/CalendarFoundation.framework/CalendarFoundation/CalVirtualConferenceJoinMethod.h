@class NSString, NSURL;

@interface CalVirtualConferenceJoinMethod : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL isBroadcast;

- (id)description;
- (id)initWithTitle:(id)a0 URL:(id)a1 isBroadcast:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
