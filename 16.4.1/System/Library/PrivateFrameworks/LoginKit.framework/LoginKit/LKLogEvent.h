@class NSString, NSDate;

@interface LKLogEvent : NSObject

@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *senderImagePath;
@property (readonly, nonatomic) NSString *composedMessage;
@property (readonly, nonatomic) unsigned long long activityIdentifier;

- (id)dictionary;
- (void)setProcess:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDate:(id)a0;
- (void)setActivityIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setSenderImagePath:(id)a0;
- (BOOL)containsMessage:(id)a0;
- (BOOL)loggedByFramework:(id)a0;
- (BOOL)loggedByProcess:(id)a0;
- (void)setComposedMessage:(id)a0;

@end
