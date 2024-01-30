@class NSString, NSError;

@interface SSMLRangeConversionResult : NSObject

@property (retain, nonatomic) NSString *plainString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } convertedRange;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;

@end
