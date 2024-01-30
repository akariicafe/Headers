@class NSString;

@interface IPFeature : NSObject

@property double confidence;
@property double weight;
@property struct _NSRange { unsigned long long location; unsigned long long length; } matchRange;
@property (copy) NSString *textUnit;

- (void).cxx_destruct;
- (id)description;
- (id)matchString;
- (BOOL)isMatchStringInsideQuotationMarks;

@end
