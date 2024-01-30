@class NSString;

@interface SNModelFeatureConnection : NSObject <NSCopying> {
    NSString *_sourceFeatureName;
    NSString *_destinationFeatureName;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
