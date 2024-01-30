@class NSArray, NSMutableDictionary;

@interface IMDServiceController : NSObject {
    NSMutableDictionary *_services;
}

@property (readonly, nonatomic) NSArray *allServices;

+ (id)sharedInstance;

- (id)serviceWithName:(id)a0;
- (void)registerSessionClassWithBundle:(id)a0;
- (id)init;
- (void)dealloc;

@end
