@class NSString;

@interface CARStreamInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long zIndex;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStreamInfoDictionary:(id)a0;

@end
