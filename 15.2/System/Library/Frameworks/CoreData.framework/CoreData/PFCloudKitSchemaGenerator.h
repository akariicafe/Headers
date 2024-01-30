@class NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitSchemaGenerator : NSObject {
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
}

+ (id)representativeValueForAttributeType:(unsigned long long)a0 defaultValue:(id)a1;

- (id)initWithMirroringOptions:(id)a0;
- (void)dealloc;

@end
