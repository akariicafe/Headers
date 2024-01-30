@class NSString;

@interface PFUBLogEventID : NSObject

@property (readonly, nonatomic) NSString *idString;
@property (readonly, nonatomic) long long hash;
@property (readonly, nonatomic) long long eventType;

+ (void)initialize;

- (id)initWithEventType:(int)a0;
- (id)initWithCustomKey:(id)a0;

@end
