@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)scanning;
+ (id)playing;
+ (id)paused;
+ (id)loading;
+ (id)stopped;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;

@end
