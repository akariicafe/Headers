@class NSString;

@interface MPPlaybackSessionCommandInfo : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *revision;
@property (readonly, nonatomic) long long priority;

+ (id)commandInfoWithIdentifier:(id)a0 revision:(id)a1 priority:(long long)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
