@class NSArray, NSMutableDictionary;

@interface IMDServiceController : NSObject {
    NSMutableDictionary *_services;
}

@property (readonly, nonatomic) NSArray *allServices;

+ (id)sharedInstance;

- (void)registerSessionClassWithBundle:(id)a0;
- (id)init;
- (void)dealloc;
- (id)serviceWithName:(id)a0;

@end
