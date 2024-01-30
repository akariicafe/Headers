@class NSArray;

@interface MEMailAppExtensionObserverCriteria : NSObject

@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) BOOL includeDisabled;

- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0 includeDisabled:(BOOL)a1;

@end
