@class NSString, NSMutableDictionary;

@interface SABinaryLocator : NSObject {
    NSMutableDictionary *_mappings;
    NSString *_buildNumber;
    BOOL _dirty;
    BOOL _enabled;
}

+ (id)sharedBinaryLocator;

- (oneway void)done;
- (void).cxx_destruct;
- (id)init;

@end
