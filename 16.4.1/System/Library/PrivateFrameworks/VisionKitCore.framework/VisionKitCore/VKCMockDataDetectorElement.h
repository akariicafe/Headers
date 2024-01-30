@class NSArray;

@interface VKCMockDataDetectorElement : VKCTextDataDetectorElement {
    unsigned long long _dataDetectorTypes;
    NSArray *_boundingQuads;
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterRange;
}

- (unsigned long long)dataDetectorTypes;
- (id)initWithDictionary:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRange;
- (void).cxx_destruct;
- (id)boundingQuads;

@end
