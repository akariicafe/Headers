@class SXTextExclusionPath;

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor {
    SXTextExclusionPath *_resultingExclusionPath;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (void).cxx_destruct;

@end
