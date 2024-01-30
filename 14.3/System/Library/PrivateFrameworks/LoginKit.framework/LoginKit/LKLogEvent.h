@class NSString, NSDate;

@interface LKLogEvent : NSObject

@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *senderImagePath;
@property (readonly, nonatomic) NSString *composedMessage;
@property (readonly, nonatomic) unsigned long long activityIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)setDate:(id)a0;
- (void)setProcess:(id)a0;
- (void)setActivityIdentifier:(unsigned long long)a0;
- (BOOL)loggedByFramework:(id)a0;
- (BOOL)loggedByProcess:(id)a0;
- (BOOL)containsMessage:(id)a0;
- (void)setComposedMessage:(id)a0;
- (void)setSenderImagePath:(id)a0;

@end
