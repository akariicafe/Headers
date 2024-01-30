@class NSCharacterSet;

@interface WBSCrowdsourcedFeedbackDomainNormalizer : NSValueTransformer {
    NSCharacterSet *_dotCharacterSet;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
