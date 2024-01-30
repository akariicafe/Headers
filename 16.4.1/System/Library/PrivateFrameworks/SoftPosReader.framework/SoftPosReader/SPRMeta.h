@class NSBundle, NSString, NSDate;

@interface SPRMeta : NSObject {
    NSString *_timestamp;
}

@property (class, readonly) SPRMeta *current;

@property (readonly) NSBundle *bundle;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundleVersion;
@property (readonly, copy) NSDate *buildDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0 timestamp:(id)a1;

@end
