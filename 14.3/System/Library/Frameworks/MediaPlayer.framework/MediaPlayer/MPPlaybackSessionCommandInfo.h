@class NSString;

@interface MPPlaybackSessionCommandInfo : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *revision;
@property (readonly, nonatomic) long long priority;

+ (id)commandInfoWithIdentifier:(id)a0 revision:(id)a1 priority:(long long)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
