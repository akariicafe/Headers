@class NSString, NSURL;

@interface CALNNotificationAction : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1 url:(id)a2;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1;

- (BOOL)isEqualToAction:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 url:(id)a2;

@end
