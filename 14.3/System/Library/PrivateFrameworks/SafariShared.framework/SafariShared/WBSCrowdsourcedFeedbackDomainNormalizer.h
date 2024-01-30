@class NSCharacterSet;

@interface WBSCrowdsourcedFeedbackDomainNormalizer : NSValueTransformer {
    NSCharacterSet *_dotCharacterSet;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)init;
- (id)transformedValue:(id)a0;
- (void).cxx_destruct;

@end
