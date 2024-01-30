@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : NSObject

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *destID;
@property (retain, nonatomic) DAMessageMoveRequest *origRequest;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatus:(int)a0 sourceID:(id)a1 destID:(id)a2;

@end
