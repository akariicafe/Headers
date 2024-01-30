@class NSString, NSMutableDictionary;

@interface SABinaryLocator : NSObject {
    NSMutableDictionary *_mappings;
    NSString *_buildNumber;
    BOOL _dirty;
    BOOL _enabled;
}

+ (id)sharedBinaryLocator;

- (id)init;
- (void).cxx_destruct;
- (oneway void)done;

@end
