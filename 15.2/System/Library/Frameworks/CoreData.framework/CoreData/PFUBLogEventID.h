@class NSString;

@interface PFUBLogEventID : NSObject {
    NSString *_idString;
    long long _eventType;
}

@property (readonly, nonatomic) long long hash;

+ (void)initialize;

- (id)initWithCustomKey:(id)a0;
- (id)initWithEventType:(int)a0;

@end
