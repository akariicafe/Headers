@class NSString, NSNumber;

@interface SSApplicationVersionCondition : SSProtocolCondition {
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersion;
}

- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (BOOL)evaluateWithContext:(id)a0;

@end
