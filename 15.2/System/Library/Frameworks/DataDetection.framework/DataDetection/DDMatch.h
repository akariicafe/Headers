@class NSString;

@interface DDMatch : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchedRange;
@property (readonly, nonatomic) NSString *matchedString;

+ (id)resultWithDDScannerResult:(id)a0 originalString:(id)a1;
+ (id)resultWithDDScannerResult:(id)a0;

- (id)initWithDDScannerResult:(id)a0;
- (void).cxx_destruct;
- (void)commonInitWithDDScannerResult:(id)a0 originalString:(id)a1;
- (id)initWithDDScannerResult:(id)a0 originalString:(id)a1;

@end
