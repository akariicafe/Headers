@class NSDictionary, NSArray;

@interface RMStatusPublisherDescription : NSObject

@property (readonly, copy, nonatomic) NSDictionary *statusKeysByNotification;
@property (readonly, copy, nonatomic) NSArray *statusKeys;

+ (id)descriptionWithEventsDictionary:(id)a0;
+ (id)descriptionWithServiceDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatusKeysByNotification:(id)a0;

@end
