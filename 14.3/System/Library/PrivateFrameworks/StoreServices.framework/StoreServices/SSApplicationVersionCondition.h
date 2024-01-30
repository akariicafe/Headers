@class NSString, NSNumber;

@interface SSApplicationVersionCondition : SSProtocolCondition {
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersion;
}

- (void)dealloc;
- (BOOL)evaluateWithContext:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
