@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)scanning;
+ (id)playing;
+ (id)paused;
+ (id)loading;
+ (id)stopped;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (id)init;

@end
