@class NSString;

@interface NEPathEvent : NSObject

@property (readonly) long long type;
@property (readonly) NSString *bundleID;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 bundleID:(id)a1;

@end
